/*
 * XREFs of ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C0249848
 * Callers:
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1C0248350 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0248B64 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1C02492DC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1C0249738 (-GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z.c)
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0249910 (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C024A264 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 */

__int64 __fastcall InteractiveControlInput::GenerateMessages(__int64 a1, struct tagWND *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  int v12; // eax
  _QWORD *v13; // rcx
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]
  int v18; // [rsp+48h] [rbp-20h]

  v4 = 0;
  v9 = 0LL;
  if ( a2 )
    v9 = *(_QWORD *)a2;
  v10 = *(_OWORD *)(a1 + 52);
  *(_QWORD *)(a1 + 16) = v9;
  v11 = *(_QWORD *)(a1 + 68);
  v12 = *(_DWORD *)(a1 + 76);
  *(_DWORD *)(a1 + 48) = a3;
  v13 = *(_QWORD **)(a1 + 40);
  v16 = v10;
  v17 = v11;
  v18 = v12;
  HandleIntObjUsageTelemetry(*v13, a2, &v16);
  if ( !a3 || (unsigned int)(a3 - 1) > 1 )
    return (unsigned int)InteractiveControlInput::GenerateCtrlInputMessages((InteractiveControlInput *)a1, a2, a4);
  if ( (a4 & 0x80u) != 0 )
    return (unsigned int)InteractiveControlDefaultScroller::GenerateMessages(
                           *(_QWORD *)(a1 + 40) + 264LL,
                           a1 + 52,
                           *(unsigned int *)(a1 + 48));
  return v4;
}
