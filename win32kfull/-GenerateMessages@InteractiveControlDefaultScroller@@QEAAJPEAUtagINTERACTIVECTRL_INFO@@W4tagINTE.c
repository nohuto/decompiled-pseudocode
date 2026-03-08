/*
 * XREFs of ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C024A264
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C0249848 (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1C024A494 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C024A564 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1C024A73C (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C024AB34 (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C024ABEC (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateMessages(
        InteractiveControlDefaultScroller *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  struct tagWND *v7; // rsi
  int updated; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // edx
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+40h] BYREF

  *((_DWORD *)a1 + 14) = a3;
  LODWORD(v14) = 0;
  LOWORD(v15) = 0;
  if ( (unsigned int)(a3 - 1) <= 1 )
  {
    if ( gpqForeground )
    {
      v7 = *(struct tagWND **)(gpqForeground + 120LL);
      if ( v7 )
      {
        updated = InteractiveControlDefaultScroller::UpdateTime(a1, (int *)&v14);
        v6 = updated;
        if ( updated >= 0 )
        {
          if ( (_DWORD)v14 )
            InteractiveControlDefaultScroller::Reset(a1, v7);
          v11 = *((_DWORD *)a1 + 15);
          v12 = *(_DWORD *)(a2 + 24);
          if ( v11 && v12 > 0 != v11 > 0 )
          {
            *((_DWORD *)a1 + 15) = v12;
            v6 = 0;
            InteractiveControlDefaultScroller::Reset(a1, v7);
            return v6;
          }
          *((_DWORD *)a1 + 15) = v12;
          updated = InteractiveControlDefaultScroller::UpdateBallistics(a1);
          v6 = updated;
          if ( updated >= 0 )
          {
            updated = InteractiveControlDefaultScroller::GenerateWheelDelta(a1, (__int16 *)&v15);
            v6 = updated;
            if ( updated >= 0 )
            {
              updated = InteractiveControlDefaultScroller::GenerateWheelMessage(a1, v15, v7);
              v6 = updated;
              if ( updated >= 0 || (unsigned int)dword_1C0357150 <= 2 )
                return v6;
            }
            else if ( (unsigned int)dword_1C0357150 <= 2 )
            {
              return v6;
            }
          }
          else if ( (unsigned int)dword_1C0357150 <= 2 )
          {
            return v6;
          }
        }
        else if ( (unsigned int)dword_1C0357150 <= 2 )
        {
          return v6;
        }
        v15 = updated;
        v14 = (__int64)"Function failed.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C0357150,
          byte_1C031F148,
          v9,
          v10,
          (void **)&v14,
          (__int64)&v15);
        return v6;
      }
    }
    v6 = -1073741816;
    if ( (unsigned int)dword_1C0357150 > 2 )
    {
LABEL_24:
      v14 = (__int64)"Function failed.";
      v15 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0357150,
        byte_1C031F148,
        a3,
        a4,
        (void **)&v14,
        (__int64)&v15);
    }
  }
  else
  {
    v6 = -1073700861;
    if ( (unsigned int)dword_1C0357150 > 2 )
      goto LABEL_24;
  }
  return v6;
}
