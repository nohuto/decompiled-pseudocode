/*
 * XREFs of ?StubDispGetModes@@YAKPEAXKPEAU_devicemodeW@@@Z @ 0x1C009ED90
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall StubDispGetModes(void *a1, unsigned int a2, struct _devicemodeW *a3)
{
  __int16 *v4; // rdx
  __int64 v5; // r8
  WORD *p_dmDriverVersion; // rcx
  int v7; // eax

  if ( a3 )
  {
    memset(a3, 0, a2);
    v4 = (__int16 *)&unk_1C028B462;
    v5 = 18LL;
    p_dmDriverVersion = &a3->dmDriverVersion;
    do
    {
      *(_OWORD *)(p_dmDriverVersion - 33) = *(_OWORD *)L"StubDisp";
      *(p_dmDriverVersion - 25) = aStubdisp[8];
      *(_DWORD *)(p_dmDriverVersion - 1) = 67175425;
      p_dmDriverVersion[1] = 220;
      *(_DWORD *)(p_dmDriverVersion + 53) = *(v4 - 1);
      v7 = *v4;
      v4 += 2;
      *(_DWORD *)(p_dmDriverVersion + 55) = v7;
      *(_DWORD *)(p_dmDriverVersion + 59) = 60;
      *(_DWORD *)(p_dmDriverVersion + 51) = 32;
      *(_DWORD *)(p_dmDriverVersion + 3) = 8126464;
      p_dmDriverVersion += 110;
      --v5;
    }
    while ( v5 );
  }
  return 3960LL;
}
