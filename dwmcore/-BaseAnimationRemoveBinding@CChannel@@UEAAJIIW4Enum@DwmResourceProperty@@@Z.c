/*
 * XREFs of ?BaseAnimationRemoveBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x1801CB850
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z @ 0x1801CD114 (-MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z.c)
 */

__int64 __fastcall CChannel::BaseAnimationRemoveBinding(
        struct CChannel *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __m128i si128; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v13, a1);
  CChannel::CheckHandle((__int64)a1, a2, 10);
  CChannel::CheckHandle((__int64)a1, a3, 0);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(__int64 *)((char *)si128.m128i_i64 + 4) = __PAIR64__(a3, a2);
  v8 = CChannel::MilResourcePropertyFromDwmResourceProperty(a4, (char *)&si128.m128i_u64[1] + 4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = CChannel::SendCommand(a1, &si128, 0x10u);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    v10 = 2181LL;
  }
  else
  {
    v10 = 2180LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v8);
LABEL_7:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v13);
  return v9;
}
