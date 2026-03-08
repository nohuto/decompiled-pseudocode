/*
 * XREFs of ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01FA7BC
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FD134 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FD260 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 */

__int64 __fastcall AbnormalDDEPost(struct tagDDECONV *a1, int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // r8

  v2 = 0;
  if ( (*((_DWORD *)a1 + 20) & 2) == 0 )
  {
    v4 = (unsigned __int64 *)*((_QWORD *)a1 + 5);
    v5 = 0LL;
    if ( v4 )
      v5 = *v4;
    PostMessage(*((_QWORD *)a1 + 6), 0x3E1u, v5, 0LL);
  }
  LOBYTE(v2) = a2 == 993;
  return v2;
}
