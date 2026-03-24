/*
 * XREFs of UpdateInputSettingWnfState @ 0x1C0138AA0
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C000B400 (UpdateTPCurrentActiveState.c)
 *     EnablePTPDevices @ 0x1C011BED0 (EnablePTPDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateInputSettingWnfState(int a1)
{
  _DWORD *v1; // r9
  char v2; // dl
  unsigned int i; // r10d
  __int64 v4; // rax

  ++dword_1C024F528[0];
  v1 = &unk_1C024F52C;
  v2 = 0;
  for ( i = 0; i < 4; ++i )
  {
    if ( *v1 == a1 )
    {
      v2 = 1;
      v1[1] = dword_1C024F528[0];
    }
    if ( v2 && i < 3 )
    {
      v4 = *(_QWORD *)v1;
      *(_QWORD *)v1 = *(_QWORD *)&dword_1C024F528[2 * i + 3];
      *(_QWORD *)&dword_1C024F528[2 * i + 3] = v4;
    }
    v1 += 2;
  }
  return ZwUpdateWnfStateData(&WNF_INPT_SETTINGS_CHANGE, dword_1C024F528, 36LL, 0LL, 0LL, 0, 0);
}
