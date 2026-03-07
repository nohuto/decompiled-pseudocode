struct HOBJ__ *__fastcall NtGdiPathToRegion(HDC a1)
{
  ULONG v1; // ecx
  DC *v3; // rcx
  struct HOBJ__ *v4; // rbx
  DC *v5; // rcx
  DC *v6[2]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v7[8]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v8; // [rsp+38h] [rbp-21h]
  struct OBJECT *v9; // [rsp+C8h] [rbp+6Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( !v6[0] )
  {
    v1 = 87;
LABEL_3:
    EngSetLastError(v1);
LABEL_4:
    DCOBJ::~DCOBJ((DCOBJ *)v6);
    return 0LL;
  }
  if ( !(unsigned int)DC::bInactive(v6[0]) )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v7, v6);
  if ( !v8 )
  {
    EngSetLastError(8u);
    v3 = v6[0];
    *((_DWORD *)v6[0] + 62) &= ~1u;
    DC::hpath(v3, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v7);
    goto LABEL_4;
  }
  RGNMEMOBJ::vCreate(
    (RGNMEMOBJ *)&v9,
    (struct EPATHOBJ *)v7,
    *(unsigned __int8 *)(*((_QWORD *)v6[0] + 122) + 214LL),
    0LL);
  if ( v9 )
  {
    v4 = RGNOBJ::hrgnAssociate(&v9);
    if ( !v4 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
  }
  else
  {
    v4 = 0LL;
  }
  v5 = v6[0];
  *((_DWORD *)v6[0] + 62) &= ~1u;
  DC::hpath(v5, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v7);
  if ( v6[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return v4;
}
