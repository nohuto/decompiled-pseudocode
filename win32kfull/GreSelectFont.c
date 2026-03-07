__int64 __fastcall GreSelectFont(HDC a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 v7; // rax
  struct LFONT *v8; // rdi
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+28h] [rbp-8h]
  int v11; // [rsp+2Ch] [rbp-4h]

  v2 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v9, a1);
  if ( v9 )
  {
    v5 = *(__int64 **)(v9 + 152);
    if ( v5 )
      v2 = *v5;
    if ( a2 != v2 )
    {
      LOBYTE(v4) = 10;
      v7 = HmgShareLockCheck(a2, v4);
      v8 = (struct LFONT *)v7;
      if ( v7 )
      {
        if ( (*(_BYTE *)(HmgPentryFromPobj(v7) + 15) & 2) == 0 )
        {
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(v9 + 152));
          *(_QWORD *)(v9 + 152) = v8;
          *(_QWORD *)(*(_QWORD *)(v9 + 976) + 296LL) = a2;
          *(_QWORD *)(v9 + 1744) = 0LL;
          *(_DWORD *)(*(_QWORD *)(v9 + 976) + 152LL) |= 0x10u;
          *(_DWORD *)(*(_QWORD *)(v9 + 976) + 152LL) &= ~0x20u;
          goto LABEL_5;
        }
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v8);
      }
      v2 = 0LL;
    }
  }
LABEL_5:
  if ( v9 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v9);
  return v2;
}
