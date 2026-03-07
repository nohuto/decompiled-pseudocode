__int64 __fastcall GreGetBaseUFIBits(struct _UNIVERSAL_FONT_ID *a1, struct _FONTFILEVIEW *a2)
{
  __int64 result; // rax
  _OWORD **v5; // rcx
  _OWORD *v6; // rax
  __int64 v7; // xmm1_8

  SGDGetSessionState(a1);
  result = (__int64)ppfeGetPFEFromUFI(a1, 0, 0);
  if ( result )
  {
    v5 = *(_OWORD ***)(*(_QWORD *)result + 200LL);
    v6 = *v5;
    *(_OWORD *)a2 = **v5;
    *((_OWORD *)a2 + 1) = v6[1];
    *((_OWORD *)a2 + 2) = v6[2];
    *((_OWORD *)a2 + 3) = v6[3];
    *((_OWORD *)a2 + 4) = v6[4];
    *((_OWORD *)a2 + 5) = v6[5];
    *((_OWORD *)a2 + 6) = v6[6];
    v7 = *((_QWORD *)v6 + 14);
    result = 1LL;
    *((_QWORD *)a2 + 14) = v7;
  }
  return result;
}
