/*
 * XREFs of NtCreatePrivateNamespace @ 0x140741A50
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140741CB8 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140743538 (ObpCaptureBoundaryDescriptor.c)
 *     ObpRegisterPrivateNamespace @ 0x1407440D0 (ObpRegisterPrivateNamespace.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreatePrivateNamespace(__int64 *a1, __int64 a2, int a3, void *a4)
{
  char PreviousMode; // si
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // ebx
  int v10; // r9d
  unsigned __int64 v11; // rbx
  PVOID *p_Object; // rcx
  int v13; // eax
  _QWORD *v14; // r14
  unsigned __int64 v15; // rbx
  size_t v16; // r8
  __int64 v17; // rcx
  int inserted; // edi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  __int64 v27; // [rsp+60h] [rbp-28h] BYREF

  Object = 0LL;
  v27 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObpCaptureBoundaryDescriptor(a4);
  if ( (int)result >= 0 )
  {
    v9 = ObpVerifyCreatorAccessCheck(48LL);
    if ( v9 >= 0 )
    {
      v11 = (unsigned int)(MEMORY[0x18] + 392);
      if ( v11 < MEMORY[0x18] )
      {
        v9 = -1073741811;
      }
      else
      {
        p_Object = &Object;
        LOBYTE(v10) = PreviousMode;
        LOBYTE(p_Object) = PreviousMode;
        v13 = ObCreateObjectEx((_DWORD)p_Object, (_DWORD)ObpDirectoryObjectType, a3, v10);
        if ( v13 >= 0 )
        {
          v14 = Object;
          memset(Object, 0, (unsigned int)v11);
          v15 = ((unsigned __int64)v14 + 351) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v15 + 8) = v15;
          *(_QWORD *)v15 = v15;
          v16 = MEMORY[0x18];
          *(_QWORD *)(v15 + 24) = MEMORY[0x18];
          *(_QWORD *)(v15 + 16) = 0LL;
          *(_BYTE *)(v15 + 40) = MEMORY[0x28];
          memmove((void *)(v15 + 48), (const void *)0x30, v16);
          ExFreePoolWithTag(0LL, 0x534E624Fu);
          v14[37] = 0LL;
          *((_DWORD *)v14 + 85) = -1;
          *((_DWORD *)v14 + 84) = 1;
          if ( (*((_BYTE *)v14 - 22) & 2) != 0 )
            v17 = (__int64)v14 - ObpInfoMaskToOffset[*((_BYTE *)v14 - 22) & 3] - 48;
          else
            v17 = 0LL;
          if ( v17 )
          {
            inserted = -1073741773;
          }
          else
          {
            inserted = ObpRegisterPrivateNamespace(((unsigned __int64)v14 + 351) & 0xFFFFFFFFFFFFFFF8uLL);
            if ( inserted >= 0 )
            {
              ObfReferenceObject(v14);
              inserted = ObInsertObjectEx(v14, 0LL, 0, 0LL, (__int64)&v27);
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&CurrentServerSiloGlobals[45], 0LL);
              if ( inserted < 0 )
              {
                v22 = *(_QWORD *)v15;
                v23 = *(_QWORD **)(v15 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) == v15 && *v23 == v15 )
                {
                  *v23 = v22;
                  *(_QWORD *)(v22 + 8) = v23;
LABEL_32:
                  --LODWORD(CurrentServerSiloGlobals[45].Blink);
                  ObfDereferenceObject(Object);
LABEL_16:
                  ExReleasePushLockEx((__int64 *)&CurrentServerSiloGlobals[45], 0LL);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  if ( inserted >= 0 )
                    *a1 = v27;
                  return (unsigned int)inserted;
                }
              }
              else
              {
                if ( (v14[42] & 2) == 0 )
                {
                  v21 = Object;
                  *(_QWORD *)(v15 + 16) = Object;
                  v21[40] = v15;
                  goto LABEL_16;
                }
                v24 = *(_QWORD *)v15;
                v25 = *(_QWORD **)(v15 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) == v15 && *v25 == v15 )
                {
                  *v25 = v24;
                  *(_QWORD *)(v24 + 8) = v25;
                  goto LABEL_32;
                }
              }
              __fastfail(3u);
            }
          }
          ObfDereferenceObject(v14);
          return (unsigned int)inserted;
        }
        v9 = v13;
      }
    }
    ExFreePoolWithTag(0LL, 0x534E624Fu);
    return (unsigned int)v9;
  }
  return result;
}
