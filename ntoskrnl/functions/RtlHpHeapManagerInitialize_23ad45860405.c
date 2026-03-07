void __fastcall RtlHpHeapManagerInitialize(union _RTL_RUN_ONCE *a1, union _RTL_RUN_ONCE *a2)
{
  __int64 v4; // rax
  union _RTL_RUN_ONCE *v5; // rbx
  union _RTL_RUN_ONCE *v6; // rdi
  __int64 v7; // rbx

  memset(a1, 0, 0x38E0uLL);
  a1->Value = (unsigned __int64)&RtlpHpHeapGlobals;
  memset(&a1[2], 0, 0x48uLL);
  a1[6].Value = -1LL;
  *((_DWORD *)&a1[8].2 + 1) = 16;
  memset(&a1[11], 0, 0x3840uLL);
  memset(&a1[13], 0, 0x50uLL);
  memset(&a1[15], 0, 0x840uLL);
  a1[19].Value = -1LL;
  v4 = 255LL;
  *((_DWORD *)&a1[21].2 + 1) = 2056;
  v5 = a1 + 282;
  do
  {
    v5[-1].Value = 0LL;
    v5[2].Value = 0LL;
    v5[3].Value = 0LL;
    v5[4].Value = 0LL;
    v5->Value = 0LL;
    v5[1].Value = 0LL;
    v5 += 6;
    --v4;
  }
  while ( v4 );
  qword_140C37930 = 0LL;
  RtlpHpHeapVaCallbacksRegistrar = 0;
  qword_140C37928 = (__int64)&unk_140C37938;
  dword_140C37924 = 2048;
  memset64(&unk_140C37938, (unsigned __int64)&RtlpHpHeapVaCallbacksRegistrar + 1, 0x40uLL);
  v6 = a1 + 1812;
  a1[1819].Ptr = a2->Ptr;
  v7 = 4LL;
  do
  {
    CmSiRWLockInitialize(v6);
    v6 += 2;
    --v7;
  }
  while ( v7 );
}
