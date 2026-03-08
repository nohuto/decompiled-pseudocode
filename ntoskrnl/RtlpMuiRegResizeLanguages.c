/*
 * XREFs of RtlpMuiRegResizeLanguages @ 0x140A723A8
 * Callers:
 *     RtlpMuiRegGetOrAddLangInfo @ 0x14085B02C (RtlpMuiRegGetOrAddLangInfo.c)
 * Callees:
 *     _SafeReallocBlob @ 0x140677D74 (_SafeReallocBlob.c)
 */

_QWORD *__fastcall RtlpMuiRegResizeLanguages(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  signed int v3; // ebx
  _QWORD *v4; // rax
  int v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v8) = 0;
  v2 = 0LL;
  v3 = 4;
  if ( a2 >= 1 )
    v3 = a2;
  if ( a1 )
  {
    if ( v3 >= *(unsigned __int16 *)(a1 + 6) )
    {
      v4 = SafeReallocBlob((unsigned int *)a1, 0x18u, v3, 0x1Cu, v6, v7, (unsigned int *)&v8);
      v2 = v4;
      if ( v4 )
      {
        *(_DWORD *)v4 = v8;
        v4[2] = v4 + 3;
        *((_WORD *)v4 + 2) = v3;
      }
    }
  }
  return v2;
}
