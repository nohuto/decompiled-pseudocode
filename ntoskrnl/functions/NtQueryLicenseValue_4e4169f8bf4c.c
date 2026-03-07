__int64 __fastcall NtQueryLicenseValue(unsigned __int64 a1, _DWORD *a2, volatile void *a3, unsigned int a4, _DWORD *a5)
{
  SIZE_T v5; // r14
  int v8; // ebx
  char PreviousMode; // dl
  _DWORD *v10; // r15
  int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  void *Pool2; // rax
  void *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax
  _DWORD Size[3]; // [rsp+34h] [rbp-64h] BYREF
  PVOID P; // [rsp+40h] [rbp-58h]
  __int128 v22; // [rsp+48h] [rbp-50h] BYREF
  int v23; // [rsp+A0h] [rbp+8h] BYREF
  _DWORD *v24; // [rsp+A8h] [rbp+10h]
  volatile void *v25; // [rsp+B0h] [rbp+18h]
  unsigned int v26; // [rsp+B8h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v24 = a2;
  v5 = a4;
  v22 = 0LL;
  v8 = 0;
  P = 0LL;
  v23 = 0;
  memset(Size, 0, sizeof(Size));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a1 && (v10 = a5) != 0LL && (a3 || !a4) )
  {
    if ( a4 > 0x800000 )
    {
      v8 = -1073741801;
    }
    else if ( PreviousMode )
    {
      if ( a1 >= 0x7FFFFFFF0000LL )
        a1 = 0x7FFFFFFF0000LL;
      v11 = *(_DWORD *)a1;
      LODWORD(v22) = *(_DWORD *)a1;
      v12 = *(_QWORD *)(a1 + 8);
      *((_QWORD *)&v22 + 1) = v12;
      if ( v12 && (_WORD)v11 && (v11 & 1) == 0 )
      {
        if ( (v12 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = v12 + (unsigned __int16)v11;
        if ( v13 > 0x7FFFFFFF0000LL || v13 < v12 )
          MEMORY[0x7FFFFFFF0000] = 0;
        Pool2 = (void *)ExAllocatePool2(256LL, (unsigned __int16)v22, 542329939LL);
        P = Pool2;
        if ( Pool2 )
        {
          v15 = Pool2;
          memmove(Pool2, *((const void **)&v22 + 1), (unsigned __int16)v22);
          *((_QWORD *)&v22 + 1) = v15;
          if ( a2 )
          {
            v16 = (__int64)a2;
            if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
              v16 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v16 = *(_DWORD *)v16;
            v23 = *a2;
          }
          if ( a3
            && (_DWORD)v5
            && (ProbeForWrite(a3, v5, 1u), (*(_QWORD *)&Size[1] = ExAllocatePool2(256LL, v5, 542329939LL)) == 0LL) )
          {
            v8 = -1073741801;
          }
          else
          {
            v17 = (__int64)v10;
            if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
              v17 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v17 = *(_DWORD *)v17;
            Size[0] = *v10;
          }
        }
        else
        {
          v8 = -1073741801;
        }
      }
      else
      {
        v8 = -1073741811;
      }
      if ( v8 >= 0 )
      {
        v8 = ntoskrnl_27((int)&v22, (int)&v23, Size[1], v5, (__int64)Size);
        if ( a2 )
          *a2 = v23;
        v18 = Size[0];
        *v10 = Size[0];
        if ( v8 >= 0 && a3 )
        {
          if ( (unsigned int)v5 < v18 )
            v8 = -1073741789;
          else
            memmove((void *)a3, *(const void **)&Size[1], v18);
        }
      }
    }
    else
    {
      v8 = ntoskrnl_27(a1, (int)a2, (int)a3, a4, (__int64)a5);
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( *(_QWORD *)&Size[1] )
    ExFreePoolWithTag(*(PVOID *)&Size[1], 0);
  return (unsigned int)v8;
}
