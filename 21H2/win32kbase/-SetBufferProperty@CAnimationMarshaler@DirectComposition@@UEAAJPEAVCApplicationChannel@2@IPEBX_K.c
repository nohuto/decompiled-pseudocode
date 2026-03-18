/*
 * XREFs of ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00AFB90
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C00AFCD8 (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1C00AFD04 (-EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
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
  int v15; // r8d
  __int64 v17; // rax
  char *v18; // rsi
  unsigned __int64 v19; // r15
  char *v20; // rax
  unsigned int v21; // ecx
  _QWORD *v22; // rdx
  char *v23; // rdx
  _OWORD *Quota; // rax

  v6 = 0;
  *a6 = 0;
  v10 = a3 - 4;
  if ( !v10 )
  {
    if ( Size == 8 && !*((_QWORD *)this + 17) )
    {
      *((_QWORD *)this + 13) = *a4;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( Size == 8 )
    {
      v17 = *a4;
      *((_DWORD *)this + 4) |= 0x20u;
      *((_QWORD *)this + 14) = v17;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    if ( Size == 16 )
    {
      if ( *((_QWORD *)this + 18) )
        return (unsigned int)-1073741790;
      Quota = (_OWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(this, 260LL, 16LL, 1734427460);
      *((_QWORD *)this + 18) = Quota;
      if ( Quota )
      {
        *Quota = *(_OWORD *)a4;
        goto LABEL_11;
      }
      return (unsigned int)-1073741801;
    }
    return (unsigned int)-1073741811;
  }
  v13 = v12 - 3;
  if ( !v13 )
  {
    if ( Size == 8 )
    {
      *((_QWORD *)this + 20) = *a4;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v14 = v13 - 2;
  if ( !v14 )
  {
    if ( Size == 1 && (*((_BYTE *)this + 200) & 2) != 0 )
    {
      v6 = DirectComposition::CAnimationMarshaler::EnsureTimeListEntry((DirectComposition::CAnimationMarshaler *)((char *)this - 16));
      if ( (v6 & 0x80000000) != 0 )
        return v6;
      *(_DWORD *)(*((_QWORD *)this + 9) + 24LL) |= 8u;
      *(_BYTE *)(*((_QWORD *)this + 9) + 28LL) = *(_BYTE *)a4;
      DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
        a2,
        *((struct DirectComposition::CAnimationTimeList **)this + 9));
      *((_DWORD *)this + 4) |= 0x4000u;
      goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( v15 != 1 || (Size & 0xF) != 0 || (*((_BYTE *)this + 200) & 2) == 0 )
      return (unsigned int)-1073741811;
    v18 = 0LL;
    LODWORD(v19) = 0;
    if ( !Size )
    {
LABEL_29:
      v23 = (char *)*((_QWORD *)this + 29);
      if ( v23 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v23);
        *((_DWORD *)this + 4) |= 0x10000u;
      }
      *((_DWORD *)this + 61) = 0;
      *((_QWORD *)this + 29) = v18;
      *((_DWORD *)this + 60) = v19;
      goto LABEL_11;
    }
    v20 = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(this, 260LL, Size, 1700873028);
    v18 = v20;
    if ( v20 )
    {
      memmove(v20, a4, Size);
      v21 = 1;
      v19 = Size >> 4;
      if ( (unsigned int)(Size >> 4) > 1 )
      {
        v22 = v18 + 16;
        while ( *v22 >= *(_QWORD *)&v18[16 * v21 - 16] )
        {
          ++v21;
          v22 += 2;
          if ( v21 >= (unsigned int)v19 )
            goto LABEL_29;
        }
        v6 = -1073741811;
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v18);
        return v6;
      }
      goto LABEL_29;
    }
    return (unsigned int)-1073741801;
  }
  if ( Size != 8 || (*((_BYTE *)this + 200) & 2) == 0 )
    return (unsigned int)-1073741811;
  v6 = DirectComposition::CAnimationMarshaler::EnsureTimeListEntry((DirectComposition::CAnimationMarshaler *)((char *)this - 16));
  if ( (v6 & 0x80000000) == 0 )
  {
    *(_DWORD *)(*((_QWORD *)this + 9) + 24LL) |= 0x10u;
    *(_QWORD *)(*((_QWORD *)this + 9) + 32LL) = *a4;
    *(_QWORD *)(*((_QWORD *)this + 9) + 40LL) = 0LL;
    DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
      a2,
      *((struct DirectComposition::CAnimationTimeList **)this + 9));
    *((_DWORD *)this + 4) |= 0x8000u;
LABEL_11:
    *a6 = 1;
  }
  return v6;
}
