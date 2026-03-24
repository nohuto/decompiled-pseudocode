/*
 * XREFs of ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x1800CF668
 * Callers:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800CF5C8 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x1800373B8 (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 */

__int64 __fastcall CTransportCmdPacker::AllocateNotification(
        __int64 a1,
        int a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        void *a6)
{
  void *v6; // rdi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // esi
  _DWORD *v12; // rbx

  v6 = 0LL;
  a6 = 0LL;
  v9 = HrAlloc(0x44uLL, &a6);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x3Eu, 0LL);
    v6 = a6;
  }
  else
  {
    v12 = a6;
    memset_0(a6, 0, 0x44uLL);
    *v12 = 10;
    v12[1] = 68;
    v12[10] = a2;
    *a5 = v12 + 10;
    *a4 = v12;
  }
  operator delete(v6);
  return v11;
}
