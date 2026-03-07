void __fastcall IVPopulateDeviceUIPIInfo(const struct RawInputManagerDeviceObject *a1, struct _IV_UIPI_INFO_INT *a2)
{
  int v3; // ebx
  PACCESS_TOKEN v4; // rax
  void *v5; // rdi
  bool v6; // zf
  int v7; // eax
  PVOID v8; // [rsp+40h] [rbp+8h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp+10h] BYREF
  PVOID v10; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)a2 = *((_DWORD *)a1 + 116);
  *((_DWORD *)a2 + 1) = *((_DWORD *)a1 + 117);
  *((_DWORD *)a2 + 2) = *((_DWORD *)a1 + 118);
  if ( (*((_DWORD *)a1 + 64) & 0x2000) != 0 && (*((_DWORD *)a1 + 68) & 4) == 0 )
  {
    v3 = 0;
    if ( !UIPrivelegeIsolation::fEnforce )
    {
      v4 = PsReferencePrimaryToken(*((PEPROCESS *)a1 + 4));
      v5 = v4;
      if ( v4 )
      {
        LODWORD(TokenInformation) = 0;
        if ( SeQueryInformationToken(v4, TokenAppContainerNumber, &TokenInformation) >= 0 )
        {
          LODWORD(v8) = 0;
          if ( SeQueryInformationToken(v5, TokenIntegrityLevel, &v8) >= 0 )
          {
            LODWORD(v10) = 0;
            if ( SeQueryInformationToken(v5, TokenUIAccess, &v10) >= 0 )
            {
              v6 = (_DWORD)v10 == 0;
              *(_DWORD *)a2 = (_DWORD)v8;
              v7 = (int)TokenInformation;
              LOBYTE(v3) = !v6;
              *((_DWORD *)a2 + 2) = v3;
              *((_DWORD *)a2 + 1) = v7;
            }
          }
        }
        PsDereferencePrimaryToken(v5);
      }
    }
  }
}
