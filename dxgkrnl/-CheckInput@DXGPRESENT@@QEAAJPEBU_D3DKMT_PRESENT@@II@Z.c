__int64 __fastcall DXGPRESENT::CheckInput(DXGPRESENT *this, const struct _D3DKMT_PRESENT *a2, LONG a3, LONG a4)
{
  unsigned int v5; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r10d
  LONG right; // edx
  LONG left; // ecx
  LONG bottom; // r9d
  LONG top; // r8d
  LONG v14; // ecx
  LONG v15; // edx
  int v16; // ecx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  void *v20; // rcx
  UINT SubRectCnt; // eax
  RECT SrcRect; // xmm1

  v5 = *((_DWORD *)this + 1) & 0xFFFFFFFB;
  *((_DWORD *)this + 1) = v5;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( *(_BYTE *)&Value < 0
    && ((right = a2->SrcRect.right, left = a2->SrcRect.left, right <= left)
     || (bottom = a2->SrcRect.bottom, top = a2->SrcRect.top, bottom <= top)
     || left >= a3
     || top >= a4
     || right <= 0
     || bottom <= 0)
    || (*(_BYTE *)&Value & 0x40) != 0
    && ((v14 = a2->DstRect.right, v14 <= a2->DstRect.left)
     || (v15 = a2->DstRect.bottom, v15 <= a2->DstRect.top)
     || v14 <= 0
     || v15 <= 0) )
  {
    *((_DWORD *)this + 1) = v5 | 4;
  }
  else
  {
    v16 = *((_DWORD *)this + 18);
    if ( v16 != Value
      || *((_DWORD *)this + 19) != a3
      || *((_DWORD *)this + 20) != a4
      || *((_DWORD *)this + 29) != a2->SubRectCnt
      || (v16 & 0x80u) != 0 && RtlCompareMemory((char *)this + 100, &a2->SrcRect, 0x10uLL) != 16
      || (*((_DWORD *)this + 18) & 0x40) != 0 && RtlCompareMemory((char *)this + 84, &a2->DstRect, 0x10uLL) != 16
      || 16LL * *((unsigned int *)this + 29) != RtlCompareMemory(
                                                  *((const void **)this + 15),
                                                  a2->pSrcSubRects,
                                                  16LL * *((unsigned int *)this + 29)) )
    {
      if ( *((_DWORD *)this + 29) < a2->SubRectCnt )
      {
        operator delete(*((void **)this + 15));
        v17 = 16LL * a2->SubRectCnt;
        if ( !is_mul_ok(a2->SubRectCnt, 0x10uLL) )
          v17 = -1LL;
        v18 = operator new[](v17, 0x4B677844u, 256LL);
        *((_QWORD *)this + 15) = v18;
        if ( !v18 )
        {
          *((_DWORD *)this + 29) = 0;
          WdLogSingleEntry2(6LL, this, a2->SubRectCnt);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"0x%I64x fails to allocate array of 0x%I64d RECTs",
            (__int64)this,
            a2->SubRectCnt,
            0LL,
            0LL,
            0LL);
          return 3221225495LL;
        }
      }
      if ( *((_DWORD *)this + 19) != a3 || *((_DWORD *)this + 20) != a4 )
      {
        *((_DWORD *)this + 1) |= 0x40u;
        *((_DWORD *)this + 19) = a3;
        *((_DWORD *)this + 20) = a4;
      }
      v20 = (void *)*((_QWORD *)this + 15);
      *((_DWORD *)this + 18) = a2->Flags.0;
      SubRectCnt = a2->SubRectCnt;
      *((_DWORD *)this + 29) = SubRectCnt;
      memmove(v20, a2->pSrcSubRects, 16LL * SubRectCnt);
      *(RECT *)((char *)this + 84) = a2->DstRect;
      SrcRect = a2->SrcRect;
      *((_DWORD *)this + 1) |= 8u;
      *(RECT *)((char *)this + 100) = SrcRect;
    }
  }
  return 0LL;
}
