__int64 __fastcall FxpGetImageBase(_DRIVER_OBJECT *DriverObject, void **ImageBase, unsigned int *ImageSize)
{
  char *DriverStart; // rbp
  unsigned int v6; // edx
  int v7; // ebx
  unsigned int v8; // esi
  unsigned int *Pool2; // rax
  unsigned int v10; // edx
  unsigned int *v11; // rdi
  int v12; // r8d
  unsigned int *v13; // rcx
  char *v14; // rdx
  __int64 v15; // r9
  unsigned int modulesSize; // [rsp+40h] [rbp+8h] BYREF

  modulesSize = 0;
  if ( DriverObject && ImageBase && ImageSize )
  {
    DriverStart = (char *)DriverObject->DriverStart;
    v7 = AuxKlibInitialize();
    if ( v7 >= 0 )
    {
      v7 = AuxKlibQueryModuleInformation(&modulesSize, v6, 0LL);
      if ( v7 >= 0 )
      {
        if ( modulesSize )
        {
          v8 = modulesSize / 0x110;
          Pool2 = (unsigned int *)ExAllocatePool2(256LL, modulesSize, 858803287LL);
          v11 = Pool2;
          if ( Pool2 )
          {
            v7 = AuxKlibQueryModuleInformation(&modulesSize, v10, Pool2);
            if ( v7 >= 0 )
            {
              v12 = 0;
              v13 = v11;
              if ( v8 )
              {
                while ( 1 )
                {
                  v14 = *(char **)v13;
                  if ( (unsigned __int64)DriverStart >= *(_QWORD *)v13 )
                  {
                    v15 = v13[2];
                    if ( DriverStart < &v14[v15] )
                      break;
                  }
                  v13 += 68;
                  if ( ++v12 >= v8 )
                    goto LABEL_14;
                }
                *ImageBase = v14;
                v7 = 0;
                *ImageSize = v15;
              }
              else
              {
LABEL_14:
                v7 = -1073741275;
              }
            }
            ExFreePoolWithTag(v11, 0);
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
