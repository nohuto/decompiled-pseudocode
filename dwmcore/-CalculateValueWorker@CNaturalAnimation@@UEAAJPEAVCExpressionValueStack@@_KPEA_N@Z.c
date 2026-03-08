/*
 * XREFs of ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180238E40
 * Callers:
 *     <none>
 * Callees:
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x1800E3CC4 (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180238A9C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x18023A3A4 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18023AC9C (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 */

__int64 __fastcall CNaturalAnimation::CalculateValueWorker(
        CNaturalAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v8; // edi
  int v9; // eax
  TimeDelta *v10; // r9
  int v11; // r8d
  int v12; // eax
  int v13; // r8d
  int v14; // eax
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-18h] BYREF
  int v17; // [rsp+28h] [rbp-10h]

  *a4 = 1;
  v8 = 0;
  CNaturalAnimation::SetupAnimationIfNecessary(this);
  v9 = TimeDelta::ToMilliseconds((CNaturalAnimation *)((char *)this + 424));
  if ( v9 >= v11
    || (*(_QWORD *)v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL) - *((_QWORD *)this + 50) - Time::s_luBegin.QuadPart,
        v12 = TimeDelta::ToMilliseconds(v10),
        v12 >= v13) )
  {
    CNaturalAnimation::CalculateValue(this, a2, a3, a4);
  }
  else if ( *((_DWORD *)this + 103) == 1 )
  {
    v14 = *((_DWORD *)this + 86);
    v16 = *((_QWORD *)this + 42);
    v17 = v14;
    CNaturalAnimation::PushValueToStack(this, &v16, a2);
  }
  else
  {
    v8 = 1;
  }
  result = v8;
  *((_BYTE *)this + 588) ^= (*((_BYTE *)this + 588) ^ (*a4 << 6)) & 0x40;
  return result;
}
