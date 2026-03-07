__int64 __fastcall VslTransformDumpKey(
        void *Src,
        size_t Size,
        void *a3,
        unsigned int a4,
        unsigned int *a5,
        KPROCESSOR_MODE PreviousMode)
{
  size_t v8; // rbx
  struct _MDL *v10; // rdi
  int v11; // ebx
  unsigned int v12; // esi
  struct _MDL *Pool2; // rax
  int v15; // [rsp+30h] [rbp-118h]
  __int64 *v16[10]; // [rsp+40h] [rbp-108h] BYREF
  _QWORD v17[14]; // [rsp+90h] [rbp-B8h] BYREF

  v8 = (unsigned int)Size;
  memset(v17, 0, 0x68uLL);
  v10 = 0LL;
  memset(v16, 0, 0x48uLL);
  v15 = 0;
  if ( VslVsmEnabled )
  {
    if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    {
      if ( (_DWORD)v8 )
      {
        v12 = 4096;
        if ( a4 <= 0x1000 )
          v12 = a4;
        Pool2 = (struct _MDL *)ExAllocatePool2(64LL, (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1416850774LL);
        v10 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, Src, v8);
          v11 = VslpLockPagesForTransfer((__int64)v16, v10, v8, 2, 2u);
          if ( v11 >= 0 )
          {
            v15 = 1;
            v17[1] = v16[0];
            v17[2] = v16[7];
            v11 = VslpEnterIumSecureMode(2u, 85, 0, (__int64)v17);
            if ( v11 >= 0 )
            {
              memmove(a3, v10, v12);
              *a5 = v12;
              v11 = 0;
            }
          }
        }
        else
        {
          v11 = -1073741670;
        }
      }
      else
      {
        v11 = -1073741820;
      }
    }
    else
    {
      v11 = -1073741727;
    }
  }
  else
  {
    v11 = -1073741667;
  }
  if ( v15 )
    VslpUnlockPagesForTransfer(v16);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x54736D56u);
  return (unsigned int)v11;
}
