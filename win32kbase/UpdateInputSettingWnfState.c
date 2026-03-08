/*
 * XREFs of UpdateInputSettingWnfState @ 0x1C017BAE0
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C0031AA0 (UpdateTPCurrentActiveState.c)
 *     EnablePTPDevices @ 0x1C015CA90 (EnablePTPDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateInputSettingWnfState(int a1)
{
  _DWORD *v1; // rdx
  char v2; // r9
  unsigned int i; // r10d
  __int64 v4; // rax

  ++dword_1C02CF220[0];
  v1 = &unk_1C02CF224;
  v2 = 0;
  for ( i = 0; i < 4; ++i )
  {
    if ( *v1 == a1 )
    {
      v2 = 1;
      v1[1] = dword_1C02CF220[0];
    }
    else if ( !v2 )
    {
      goto LABEL_7;
    }
    if ( i < 3 )
    {
      v4 = *(_QWORD *)v1;
      *(_QWORD *)v1 = *(_QWORD *)&dword_1C02CF220[2 * i + 3];
      *(_QWORD *)&dword_1C02CF220[2 * i + 3] = v4;
    }
LABEL_7:
    v1 += 2;
  }
  return ZwUpdateWnfStateData(&WNF_INPT_SETTINGS_CHANGE, dword_1C02CF220, 36LL, 0LL, 0LL);
}
