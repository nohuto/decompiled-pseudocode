/*
 * XREFs of PiDqConvertObjectTypeToString @ 0x14095907C
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140745F08 (PiDqIrpQueryCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDqConvertObjectTypeToString(int a1, const wchar_t **a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  const wchar_t *v7; // rax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx

  v2 = 0;
  *a2 = 0LL;
  if ( a1 > 6 )
  {
    v8 = a1 - 7;
    if ( !v8 )
    {
      v7 = L"DeviceInstallerClass";
      goto LABEL_27;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v7 = L"DeviceInterfaceDisplay";
      goto LABEL_27;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v7 = L"DeviceContainerDisplay";
      goto LABEL_27;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v7 = L"AEPService";
      goto LABEL_27;
    }
    if ( v11 == 1 )
    {
      v7 = L"DevicePanel";
      goto LABEL_27;
    }
  }
  else
  {
    if ( a1 == 6 )
    {
      v7 = L"AEPContainer";
      goto LABEL_27;
    }
    if ( !a1 )
    {
      v7 = L"Unknown";
      goto LABEL_27;
    }
    v3 = a1 - 1;
    if ( !v3 )
    {
      v7 = L"DeviceInterface";
      goto LABEL_27;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      v7 = L"DeviceContainer";
      goto LABEL_27;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v7 = L"Device";
      goto LABEL_27;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v7 = L"DeviceInterfaceClass";
      goto LABEL_27;
    }
    if ( v6 == 1 )
    {
      v7 = L"AEP";
LABEL_27:
      *a2 = v7;
      return v2;
    }
  }
  return (unsigned int)-1073741811;
}
