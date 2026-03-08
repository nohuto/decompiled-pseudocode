/*
 * XREFs of McGenEventWrite_EtwEventWriteTransfer @ 0x14000B068
 * Callers:
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x14000394C (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x14000B0CC (McTemplateU0q_EtwEventWriteTransfer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWrite_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  int v7; // r8d

  v5 = (unsigned __int16 *)qword_140016058;
  v6 = 0;
  if ( qword_140016058 )
  {
    *(_QWORD *)a5 = qword_140016058;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v7 = 0;
  }
  *(_DWORD *)(a5 + 8) = v7;
  *(_DWORD *)(a5 + 12) = v6;
  return EtwEventWriteTransfer(Microsoft_Windows_Dwm_Dwm_Provider_Context, a2, 0LL, 0LL, a4, a5);
}
