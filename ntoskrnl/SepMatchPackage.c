/*
 * XREFs of SepMatchPackage @ 0x14024717C
 * Callers:
 *     SepMaximumAccessCheck @ 0x140208450 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x140208E18 (SepNormalAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x140267220 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1403C8AF0 (SepMaximumAccessCheckEx.c)
 * Callees:
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140247208 (SepCanTokenMatchAllPackageSid.c)
 */

char __fastcall SepMatchPackage(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        _BYTE *a5,
        _DWORD *a6,
        _BYTE *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  _BYTE *v11; // rax
  int v12; // ebx

  if ( *(_DWORD *)(a3 + 8) == 2 && *(_BYTE *)(a3 + 1) == 2 )
  {
    LODWORD(v11) = *(_DWORD *)(a3 + 12);
    if ( (_DWORD)v11 == 1 )
    {
      v12 = a4 & a2;
      if ( !(unsigned __int8)SepCanTokenMatchAllPackageSid() )
      {
        *a8 |= v12;
        v11 = a9;
        goto LABEL_6;
      }
LABEL_5:
      *a6 |= v12;
      v11 = a5;
LABEL_6:
      *v11 = 1;
      return (char)v11;
    }
    if ( (_DWORD)v11 != 2 )
      return (char)v11;
LABEL_10:
    v12 = a4 & a2;
    goto LABEL_5;
  }
  LOBYTE(v11) = (_BYTE)a7;
  *a7 = 1;
  if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
  {
    LOBYTE(v11) = RtlEqualSid(*(PSID *)(a1 + 784), (PSID)a3);
    if ( (_BYTE)v11 )
      goto LABEL_10;
  }
  return (char)v11;
}
