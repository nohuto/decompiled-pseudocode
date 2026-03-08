/*
 * XREFs of ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00B8760
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1C00B88A0 (-EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C00B8928 (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::SetBufferProperty(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  __int64 v16; // rax
  char *v17; // rsi
  unsigned __int64 v18; // r14
  char *Quota; // rax
  unsigned int v20; // ecx
  _QWORD *v21; // rdx
  char *v22; // rdx

  v6 = 0;
  *a6 = 0;
  v10 = a3 - 4;
  if ( !v10 )
  {
    if ( Size == 8 && !*((_QWORD *)this + 16) )
    {
      *((_QWORD *)this + 12) = *a4;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( Size == 8 )
    {
      v16 = *a4;
      *((_DWORD *)this + 4) |= 0x20u;
      *((_QWORD *)this + 13) = v16;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v12 = v11 - 4;
  if ( !v12 )
  {
    if ( Size == 8 )
    {
      *((_QWORD *)this + 18) = *a4;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v13 = v12 - 2;
  if ( !v13 )
  {
    if ( Size == 1 && (*((_BYTE *)this + 184) & 2) != 0 )
    {
      v6 = DirectComposition::CAnimationMarshaler::EnsureTimeListEntry((DirectComposition::CAnimationMarshaler *)((char *)this - 16));
      if ( (v6 & 0x80000000) != 0 )
        return v6;
      *(_DWORD *)(*((_QWORD *)this + 8) + 24LL) |= 8u;
      *(_BYTE *)(*((_QWORD *)this + 8) + 28LL) = *(_BYTE *)a4;
      DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
        a2,
        *((struct DirectComposition::CAnimationTimeList **)this + 8));
      *((_DWORD *)this + 4) |= 0x4000u;
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( Size == 8 && (*((_BYTE *)this + 184) & 2) != 0 )
    {
      v6 = DirectComposition::CAnimationMarshaler::EnsureTimeListEntry((DirectComposition::CAnimationMarshaler *)((char *)this - 16));
      if ( (v6 & 0x80000000) == 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 8) + 24LL) |= 0x10u;
        *(_QWORD *)(*((_QWORD *)this + 8) + 32LL) = *a4;
        *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) = 0LL;
        DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
          a2,
          *((struct DirectComposition::CAnimationTimeList **)this + 8));
        *((_DWORD *)this + 4) |= 0x8000u;
LABEL_10:
        *a6 = 1;
        return v6;
      }
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  if ( v14 != 1 || (Size & 0xF) != 0 || (*((_BYTE *)this + 184) & 2) == 0 )
    return (unsigned int)-1073741811;
  v17 = 0LL;
  LODWORD(v18) = 0;
  if ( !Size )
    goto LABEL_28;
  Quota = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(this, 260LL, Size, 0x65614344u);
  v17 = Quota;
  if ( !Quota )
    return (unsigned int)-1073741801;
  memmove(Quota, a4, Size);
  v20 = 1;
  v18 = Size >> 4;
  if ( (unsigned int)(Size >> 4) <= 1 )
  {
LABEL_28:
    v22 = (char *)*((_QWORD *)this + 27);
    if ( v22 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v22);
      *((_DWORD *)this + 4) |= 0x10000u;
    }
    *((_DWORD *)this + 57) = 0;
    *((_QWORD *)this + 27) = v17;
    *((_DWORD *)this + 56) = v18;
    goto LABEL_10;
  }
  v21 = v17 + 16;
  while ( *v21 >= *(_QWORD *)&v17[16 * v20 - 16] )
  {
    ++v20;
    v21 += 2;
    if ( v20 >= (unsigned int)v18 )
      goto LABEL_28;
  }
  v6 = -1073741811;
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v17);
  return v6;
}
