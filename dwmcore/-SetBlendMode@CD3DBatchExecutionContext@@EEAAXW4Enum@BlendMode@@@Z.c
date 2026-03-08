/*
 * XREFs of ?SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z @ 0x1800D8250
 * Callers:
 *     <none>
 * Callees:
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1800900C4 (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DBatchExecutionContext::SetBlendMode(__int64 a1, int a2)
{
  __int64 v2; // rsi
  int v4; // r9d
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  CD3DDynamicAppendBuffer *v7; // r14
  char v8; // al

  v2 = a2;
  if ( a2 != *(_DWORD *)(a1 + 64) )
  {
    v4 = 4;
    if ( (*(_DWORD *)(a1 + 64) == 22) != (a2 == 22) )
      v4 = -2147483642;
    *(_DWORD *)(a1 + 40) |= v4;
    v5 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v5 + 40) )
    {
      v7 = (CD3DDynamicAppendBuffer *)(v5 + 64);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v5 + 16) + 560LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v5 + 16) + 560LL),
        *(_QWORD *)(v5 + 24),
        0LL);
      *(_QWORD *)(v5 + 40) = 0LL;
      *(_DWORD *)(v5 + 48) = 0;
      v8 = *(_BYTE *)(a1 + 82);
      if ( v8 )
      {
        v6 = (_QWORD *)(a1 + 16);
        if ( v8 == 2 )
        {
          CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(*(_QWORD *)(a1 + 32) + 112LL));
          CD3DDynamicAppendBuffer::EndAppend(v7);
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*v6 + 160LL))(
            *v6,
            *(unsigned int *)(a1 + 100),
            *(unsigned int *)(a1 + 104),
            *(unsigned int *)(a1 + 88),
            0,
            *(_DWORD *)(a1 + 92));
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v6 + 104LL))(
            *v6,
            *(unsigned int *)(a1 + 96),
            *(unsigned int *)(a1 + 84));
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v7 + 560LL) + 120LL))(
          *(_QWORD *)(*(_QWORD *)v7 + 560LL),
          *(_QWORD *)(v5 + 72),
          0LL);
        *(_QWORD *)(v5 + 88) = 0LL;
        v6 = (_QWORD *)(a1 + 16);
        *((_DWORD *)v7 + 8) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 96LL))(
          *(_QWORD *)(a1 + 16),
          *(unsigned int *)(a1 + 100),
          *(unsigned int *)(a1 + 88),
          0LL);
      }
      ++*(_DWORD *)(a1 + 124);
      *(_DWORD *)(a1 + 96) = 0;
      *(_DWORD *)(a1 + 100) = 0;
      *(_DWORD *)(a1 + 104) = 0;
    }
    else
    {
      v6 = (_QWORD *)(a1 + 16);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 280LL))(
      *v6,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v2 + 1640),
      0LL,
      0xFFFFFFFFLL);
    *(_DWORD *)(a1 + 64) = v2;
  }
}
