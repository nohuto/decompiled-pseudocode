/*
 * XREFs of NdisMEnableVirtualization @ 0x1C007CBC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NdisMEnableVirtualization(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // si
  char v6; // bp
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64, __int64, int); // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-38h]

  v5 = a4;
  v6 = a3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x73u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      a1);
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, int))(a1 + 4792);
  if ( v9 && (v10 = *(_QWORD *)(a1 + 4816)) != 0 )
  {
    if ( a5 || !a2 )
    {
      LOBYTE(v13) = a5;
      LOBYTE(a4) = v5;
      LOBYTE(a3) = v6;
      v11 = v9(v10, a2, a3, a4, v13);
    }
    else
    {
      v11 = -1073741811;
    }
  }
  else
  {
    v11 = -1073741637;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x74u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      a1,
      v11);
  return v11;
}
