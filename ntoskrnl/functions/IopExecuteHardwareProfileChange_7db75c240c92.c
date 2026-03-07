__int64 __fastcall IopExecuteHardwareProfileChange(__int64 a1, PCWSTR *a2, unsigned int a3, HANDLE *a4, _BYTE *a5)
{
  __int64 v6; // r12
  __int64 Pool2; // rax
  UNICODE_STRING *v8; // r15
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int16 v11; // bp
  UNICODE_STRING *v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rax
  UNICODE_STRING *v15; // rsi
  __int64 v16; // r14
  UNICODE_STRING *v17; // rdi
  UNICODE_STRING v18; // xmm0
  int v19; // esi
  UNICODE_STRING *v20; // rcx
  int Length; // eax
  unsigned int v22; // esi
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int16 *v25; // rdi
  _WORD *v26; // rax
  _WORD *v27; // r14
  const void **v28; // r13
  __int64 v29; // r15
  size_t v30; // rbx
  __int64 v32; // [rsp+30h] [rbp-38h]
  __int64 v33; // [rsp+30h] [rbp-38h]
  UNICODE_STRING *v34; // [rsp+38h] [rbp-30h]

  v6 = a3;
  Pool2 = ExAllocatePool2(64LL, 16 * a3, 863006288LL);
  v34 = (UNICODE_STRING *)Pool2;
  v8 = (UNICODE_STRING *)Pool2;
  if ( Pool2 )
  {
    v10 = v6;
    v11 = 1;
    if ( (_DWORD)v6 )
    {
      v12 = (UNICODE_STRING *)Pool2;
      v13 = v6;
      do
      {
        RtlInitUnicodeString(v12++, *a2++);
        --v13;
      }
      while ( v13 );
      v32 = v6;
      v14 = v6;
      do
      {
        if ( (_DWORD)v6 != 1 )
        {
          v15 = v8;
          v16 = (unsigned int)(v6 - 1);
          v17 = v8 + 1;
          do
          {
            if ( RtlCompareUnicodeString(v17 - 1, v17, 0) > 0 )
            {
              v18 = *v17;
              *v17 = *v15;
              *v15 = v18;
            }
            ++v17;
            ++v15;
            --v16;
          }
          while ( v16 );
          v14 = v32;
        }
        v32 = --v14;
      }
      while ( v14 );
      v33 = v6;
      v19 = 0;
      v20 = v8;
      do
      {
        Length = v20->Length;
        ++v20;
        v19 += Length;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      v33 = v6;
      v19 = 0;
    }
    v22 = v19 + 2;
    v23 = ExAllocatePool2(64LL, v22 + 6LL, 863006288LL);
    v25 = (unsigned __int16 *)v23;
    if ( v23 )
    {
      v26 = (_WORD *)(v23 + 4);
      v27 = v26;
      if ( (_DWORD)v6 )
      {
        v28 = (const void **)v8;
        v29 = v33;
        do
        {
          v30 = *(unsigned __int16 *)v28;
          memmove(v27, v28[1], v30);
          v27 = (_WORD *)((char *)v27 + v30);
          v28 += 2;
          --v29;
        }
        while ( v29 );
        v8 = v34;
        v26 = v25 + 2;
      }
      *v27 = 0;
      v25[1] = v22;
      if ( (unsigned int)v6 > 1 || *v26 )
        v11 = 2;
      *v25 = v11;
      v9 = CmSetAcpiHwProfile(
             v25,
             (__int64 (__fastcall *)(PVOID, unsigned int *, _QWORD))IopExecuteHwpDefaultSelect,
             v24,
             a4,
             a5);
    }
    else
    {
      v9 = -1073741670;
    }
    ExFreePoolWithTag(v8, 0x33706E50u);
    if ( v25 )
      ExFreePoolWithTag(v25, 0x33706E50u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
