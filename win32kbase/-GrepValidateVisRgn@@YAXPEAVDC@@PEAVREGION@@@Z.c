void __fastcall GrepValidateVisRgn(struct DC *a1, struct REGION *a2)
{
  int v2; // eax
  struct REGION *v3; // r14
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  __m128i si128; // [rsp+50h] [rbp-30h] BYREF
  _RECTL v13; // [rsp+60h] [rbp-20h] BYREF

  v2 = *((_DWORD *)a1 + 9);
  v3 = a2;
  if ( (v2 & 0x100000) != 0 )
  {
    v8 = *((_QWORD *)a1 + 6);
    if ( v8 )
    {
      if ( a2 )
      {
        v9 = 0LL;
        if ( (v2 & 0x40000) != 0 )
        {
          v11 = *((_QWORD *)a1 + 265);
          if ( v11 )
          {
            LOBYTE(a2) = 5;
            v9 = HmgShareLockCheck(v11, a2);
            v10 = v9;
          }
          else
          {
            v10 = *(_QWORD *)(v8 + 2528);
          }
        }
        else
        {
          v10 = *((_QWORD *)a1 + 62);
        }
        if ( v10 && ((*(_DWORD *)(v8 + 40) & 0x20000) == 0 || *(int *)(v10 + 112) >= 0) )
        {
          v13 = *(_RECTL *)((char *)v3 + 56);
          if ( (*((_DWORD *)a1 + 9) & 0x5000) != 0x1000 && !(unsigned int)ERECTL::bEmpty((ERECTL *)&v13) )
          {
            si128 = _mm_load_si128((const __m128i *)&_xmm);
            if ( !ERECTL::bEqual((ERECTL *)&v13, (const struct ERECTL *)&si128) )
            {
              v6 = -(__int64)((*(_DWORD *)(v5 + 116) & 0x800) != 0);
              si128.m128i_i64[0] = 0LL;
              si128.m128i_i64[1] = *(_QWORD *)((v6 & 0x264) + v5 + 56);
              if ( (unsigned int)ERECTL::bWrapped((ERECTL *)&v13)
                || !(unsigned int)ERECTL::bContain((ERECTL *)&si128, &v13) )
              {
                DbgkWerCaptureLiveKernelDump(L"win32k.sys", 400LL, 1LL, a1, v7, v3, 0LL, 0LL, 0);
                ERECTL::vOrder((ERECTL *)&v13);
                ERECTL::operator*=(&v13, &si128);
                si128.m128i_i64[0] = (__int64)v3;
                RGNOBJ::vSet((RGNOBJ *)&si128, &v13);
              }
            }
          }
        }
        if ( v9 )
          HmgDecrementShareReferenceCountEx(v9, 0LL);
      }
    }
  }
}
