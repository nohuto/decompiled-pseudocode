__int64 __fastcall DxgkpAdapterRefCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v9; // [rsp+28h] [rbp-20h]
  char v10; // [rsp+30h] [rbp-18h]

  v9 = a1;
  v10 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    v4 = (unsigned int)*a2;
    if ( (unsigned int)v4 >= a2[1] )
    {
      v5 = -1073741789;
      goto LABEL_6;
    }
    v6 = (_QWORD *)(*((_QWORD *)a2 + 1) + 16 * v4);
    *a2 = v4 + 1;
    *v6 = a1;
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v6[1] = -1LL;
  }
  v5 = 0;
LABEL_6:
  if ( v10 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
  return v5;
}
