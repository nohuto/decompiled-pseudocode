/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z @ 0x18009D7F4
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800A0434 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<CTouchContact,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x70u, 1, a2);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xC0u);
    }
    else
    {
      v6 = 112 * v2;
      v7 = *(_QWORD *)a1;
      *(_OWORD *)(v6 + v7) = *a2;
      *(_OWORD *)(v6 + v7 + 16) = a2[1];
      *(_OWORD *)(v6 + v7 + 32) = a2[2];
      *(_OWORD *)(v6 + v7 + 48) = a2[3];
      *(_OWORD *)(v6 + v7 + 64) = a2[4];
      *(_OWORD *)(v6 + v7 + 80) = a2[5];
      *(_OWORD *)(v6 + v7 + 96) = a2[6];
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  else
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  return v5;
}
