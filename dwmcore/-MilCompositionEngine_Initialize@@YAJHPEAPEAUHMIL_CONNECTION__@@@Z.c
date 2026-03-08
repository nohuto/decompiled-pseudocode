/*
 * XREFs of ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800CA9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CInternalMilCmdConnection@@QEAA@XZ @ 0x1800CAA88 (--0CInternalMilCmdConnection@@QEAA@XZ.c)
 *     ?StartCompositionThread@CConnection@@AEAAJH@Z @ 0x1800CCAB4 (-StartCompositionThread@CConnection@@AEAAJH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCInternalMilCmdConnection@@U?$default_delete@VCInternalMilCmdConnection@@@std@@@std@@QEAA@XZ @ 0x18010E2F0 (--1-$unique_ptr@VCInternalMilCmdConnection@@U-$default_delete@VCInternalMilCmdConnection@@@std@@.c)
 *     ??_GCInternalMilCmdConnection@@UEAAPEAXI@Z @ 0x1801B03B0 (--_GCInternalMilCmdConnection@@UEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall MilCompositionEngine_Initialize(int a1, struct HMIL_CONNECTION__ **a2)
{
  CInternalMilCmdConnection *v4; // rax
  CConnection *v5; // rbx
  int started; // eax
  unsigned int v7; // esi
  CInternalMilCmdConnection *v8; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CConnection *v15; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v10 = -2147024809;
    v11 = 51LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)v10,
      v12);
    return v10;
  }
  if ( g_pConnection )
  {
    v10 = -2147483634;
    v11 = 52LL;
    goto LABEL_10;
  }
  v4 = (CInternalMilCmdConnection *)DefaultHeap::AllocClear(0xC0uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v15 = CInternalMilCmdConnection::CInternalMilCmdConnection(v4);
  v5 = v15;
  started = CConnection::StartCompositionThread(v15, a1);
  v7 = started;
  if ( started < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
      (const char *)(unsigned int)started,
      v12);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)v7,
      v13);
    std::unique_ptr<CInternalMilCmdConnection>::~unique_ptr<CInternalMilCmdConnection>(&v15);
    return v7;
  }
  else
  {
    v8 = g_pConnection;
    g_pConnection = v5;
    if ( v8 )
    {
      CInternalMilCmdConnection::`scalar deleting destructor'(v8, 1u);
      v5 = g_pConnection;
    }
    *a2 = v5;
    return 0LL;
  }
}
