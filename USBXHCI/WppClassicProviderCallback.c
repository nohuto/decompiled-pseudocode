/*
 * XREFs of WppClassicProviderCallback @ 0x1C0038B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WppClassicProviderCallback(__int64 a1, unsigned __int8 a2, __int64 *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx

  if ( a2 <= 1u )
  {
    result = 0LL;
    if ( a2 )
    {
      *(_DWORD *)(a4 + 44) = *((_DWORD *)a3 + 1);
      *(_BYTE *)(a4 + 41) = *((_BYTE *)a3 + 2);
      v5 = *a3;
      *(_QWORD *)(a4 + 24) = *a3;
      LOBYTE(a4) = *((_BYTE *)a3 + 2);
      return imp_WppRecorderReplay(WPP_GLOBAL_Control, v5, *((unsigned int *)a3 + 1), a4);
    }
    else
    {
      *(_BYTE *)(a4 + 41) = 0;
      *(_DWORD *)(a4 + 44) = 0;
      *(_QWORD *)(a4 + 24) = 0LL;
    }
  }
  return result;
}
