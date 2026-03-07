void __fastcall DEC_SHARE_REF_CNT_LAZY0(struct HOBJ__ **a1)
{
  struct HOBJ__ *v1; // rbx
  int v2; // edi
  int v3; // esi
  _DWORD *v4; // rax
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  if ( a1 )
  {
    v1 = *a1;
    if ( (unsigned __int16)HmgDecrementShareReferenceCountEx(a1, 0LL) == 1 )
    {
      v2 = 0;
      v5 = 0LL;
      v6 = 0;
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v5, v1, 16);
      v3 = v6;
      if ( v6 )
      {
        v4 = (_DWORD *)*((_QWORD *)HANDLELOCK::pObj((HANDLELOCK *)&v5) + 6);
        if ( v4 )
          v2 = *v4 & 2;
        HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
        v3 = v6;
      }
      if ( v2 )
        bDeleteBrush(v1);
      if ( v3 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
    }
  }
}
