__int64 __fastcall SepSecureBootGetPolicyDefaultValue(_WORD *a1, __int64 a2, _QWORD *a3, int *a4)
{
  unsigned int v4; // edx
  int v5; // eax
  _WORD *v6; // rcx

  v4 = 0;
  switch ( *a1 & 0x1F )
  {
    case 0:
      v5 = (unsigned __int16)a1[1];
      v6 = a1 + 2;
      goto LABEL_13;
    case 1:
      v5 = 1;
      goto LABEL_10;
    case 5:
    case 6:
    case 7:
      v5 = 8;
LABEL_10:
      v6 = a1 + 1;
LABEL_13:
      *a3 = v6;
      *a4 = v5;
      return v4;
    case 8:
      return (unsigned int)-1073741275;
    default:
      return (unsigned int)-1069350909;
  }
}
