/*
 * XREFs of WPP_RECORDER_SF_qS @ 0x1C007F1E8
 * Callers:
 *     NdisMTriggerPDDrainNotification @ 0x1C007EC10 (NdisMTriggerPDDrainNotification.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  const wchar_t *v12; // rax
  int v14; // [rsp+20h] [rbp-48h]

  v7 = a7;
  v8 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
  {
    if ( a7 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a7[v10] );
      v11 = 2 * v10 + 2;
    }
    else
    {
      v11 = 10LL;
    }
    v12 = a7;
    if ( !a7 )
      v12 = L"NULL";
    ndisWppFastTraceMessage(&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids, 0x20u, &a6, 8LL, v12, v11, 0LL);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( v7[v8] );
  }
  LOWORD(v14) = 32;
  return WppAutoLogTrace(a1, 5LL, 29LL, &WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids, v14, &a6);
}
