/*
 * XREFs of sub_1800FFA24 @ 0x1800FFA24
 * Callers:
 *     sub_1800F9ED0 @ 0x1800F9ED0 (sub_1800F9ED0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FFA24(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  LSTATUS ValueW; // eax
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  int pvData; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  pcbData = 4;
  if ( !a2 )
    return 2147500035LL;
  *a2 = 0;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
             L"AudioMirroringEnabled",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  if ( ValueW )
  {
    if ( ValueW > 0 )
      return (unsigned __int16)ValueW | 0x80070000;
    else
      return (unsigned int)ValueW;
  }
  else if ( (pvData != 0) != *(_BYTE *)(a1 + 352) )
  {
    *(_BYTE *)(a1 + 352) = pvData != 0;
    *a2 = 1;
  }
  return v2;
}
