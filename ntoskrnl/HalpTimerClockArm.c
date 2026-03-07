__int64 __fastcall HalpTimerClockArm(int a1, ULONG_PTR a2, unsigned __int64 *a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  int v10; // ebp
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 result; // rax

  v4 = HalpClockTimer;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = a2;
  if ( a2 > HalpTimerMaxIncrement )
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x25uLL, a2, 0LL);
  if ( a2 < (unsigned int)HalpTimerMinIncrement )
    v8 = (unsigned int)HalpTimerMinIncrement;
  if ( (CurrentPrcb->PendingTickFlags & 2) != 0 )
    HalpTimerSwitchToNormalClock(0LL);
  if ( a1 == 1 )
  {
    v9 = 0LL;
    v10 = *(_DWORD *)(v4 + 224);
    if ( (v10 & 0x20) != 0 )
    {
      v11 = *(_QWORD *)(v4 + 192);
      v12 = v11 * v8;
      if ( is_mul_ok(v11, v8) && v12 + 9999999 >= v12 )
      {
        v13 = *(_DWORD *)(v4 + 220);
        v14 = (v12 + 9999999) / 0x989680;
        if ( v13 < 0x40 && v14 >= 1LL << v13 )
        {
          result = 3221225485LL;
        }
        else
        {
          if ( is_mul_ok(v14, 0x2540BE400uLL) )
            v15 = v14 * (unsigned __int128)0x2540BE400uLL / v11;
          else
            v15 = HalpTimerScaleCounter(v14, *(_QWORD *)(v4 + 192), 10000000000LL);
          *(_QWORD *)(v4 + 16) = v14;
          *(_DWORD *)(v4 + 52) = 1;
          v9 = v15 / 0x3E8;
          if ( (v10 & 0x10000) != 0 )
            v16 = *(_QWORD *)(v4 + 72) + *(_DWORD *)(v4 + 80) * KeGetPcr()->Prcb.Number;
          else
            v16 = *(_QWORD *)(v4 + 72);
          result = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(v4 + 128))(v16, 3LL, v14);
          if ( (int)result < 0 )
          {
            HalpTimerLastProblem = 18;
            *(_QWORD *)(v4 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
            *(_DWORD *)(v4 + 252) = 18;
            *(_DWORD *)(v4 + 256) = result;
            *(_DWORD *)(v4 + 272) = 782;
          }
        }
      }
      else
      {
        result = 3221225621LL;
      }
    }
    else
    {
      HalpTimerLastProblem = 17;
      *(_QWORD *)(v4 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
      result = 3221225659LL;
      *(_QWORD *)(v4 + 252) = 17LL;
      *(_DWORD *)(v4 + 272) = 671;
    }
    *a3 = v9;
  }
  else
  {
    LOBYTE(a4) = 1;
    result = HalpSetTimer(v4, 2LL, v8, a4, a3);
  }
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x110uLL, v4, HalpTimerLastProblem, (int)result);
  return result;
}
