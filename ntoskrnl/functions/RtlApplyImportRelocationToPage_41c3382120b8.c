_BYTE *__fastcall RtlApplyImportRelocationToPage(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        int a6,
        int a7,
        char a8)
{
  int v10; // ebx
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+48h] [rbp-30h]
  __int16 v14; // [rsp+4Ch] [rbp-2Ch]

  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  v10 = a2 + (*a5 & 0xFFF) - 4096;
  if ( !a7 )
    v10 = a2 + (*a5 & 0xFFF);
  RtlpConstructImportRelocationFixup(v10, a3, a4, a5, a6, a8, (__int64)&v12);
  return RtlpApplyGenericRetpolineFixup(a1, 0x1000u, &v12, v10 - a2);
}
