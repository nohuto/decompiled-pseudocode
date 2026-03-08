/*
 * XREFs of ?UpdateStop@CGradientBrush@@AEAAXPEBUIUnknown@@@Z @ 0x18003F608
 * Callers:
 *     ?OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003F420 (-OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGradientBrush::UpdateStop(CGradientBrush *this, const struct IUnknown *a2)
{
  __int64 v2; // r11
  unsigned int v3; // r9d
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __m128i v8; // xmm1
  __int64 v9; // rdx
  int v10; // xmm0_4
  __int64 v11; // rcx
  _BYTE v12[20]; // [rsp+0h] [rbp-28h]

  v2 = *((_QWORD *)this + 21);
  v3 = 0;
  v5 = (*((_QWORD *)this + 22) - v2) >> 3;
  if ( v5 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v2 + 8 * v6);
      if ( a2 == (const struct IUnknown *)v7 )
        break;
      v6 = ++v3;
      if ( v3 >= v5 )
        return;
    }
    v8 = _mm_loadu_si128((const __m128i *)(v7 + 68));
    v9 = 5 * v6;
    v10 = *(_DWORD *)(v7 + 64);
    v11 = *((_QWORD *)this + 24);
    *(__m128i *)&v12[4] = v8;
    *(_DWORD *)v12 = v10;
    *(_OWORD *)(v11 + 4 * v9) = *(_OWORD *)v12;
    *(_DWORD *)(v11 + 4 * v9 + 16) = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
    *((_BYTE *)this + 224) = 0;
  }
}
