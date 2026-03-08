/*
 * XREFs of MiFreeRelocations @ 0x140A45458
 * Callers:
 *     MiDeleteControlArea @ 0x140215028 (MiDeleteControlArea.c)
 *     MiRelocateImage @ 0x1407F2760 (MiRelocateImage.c)
 * Callees:
 *     MiReturnImageBase @ 0x1407C8860 (MiReturnImageBase.c)
 *     MiFreeImageLoadConfig @ 0x140A47684 (MiFreeImageLoadConfig.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRelocations(_DWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v5; // ecx
  bool v6; // zf
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    v9 = 0LL;
    v10 = 0LL;
    v2 = (unsigned int)a1[22];
    if ( v2 != 0xFFFFFFFFLL )
    {
      v5 = a1[23];
      *(_QWORD *)&v9 = v2;
      DWORD2(v9) = (unsigned __int16)v5;
      v6 = (a1[14] & 0x20000000) == 0;
      LODWORD(v10) = (v5 >> 20) & 3;
      if ( v6 )
      {
        BYTE12(v9) = 0;
      }
      else
      {
        BYTE12(v9) = 1;
        BYTE13(v9) = BYTE2(v5) & 1;
      }
      MiReturnImageBase((__int64)&v9);
      a1[22] = -1;
    }
    MiFreeImageLoadConfig(a2 + 9);
    v7 = (_QWORD *)a2[2];
    if ( v7 )
    {
      do
      {
        v8 = (_QWORD *)*v7;
        ExFreePoolWithTag(v7, 0);
        v7 = v8;
      }
      while ( v8 );
    }
    ExFreePoolWithTag(a2, 0);
  }
}
