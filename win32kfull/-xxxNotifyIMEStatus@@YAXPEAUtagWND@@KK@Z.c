/*
 * XREFs of ?xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z @ 0x1C00DC278
 * Callers:
 *     NtUserNotifyIMEStatus @ 0x1C00DC190 (NtUserNotifyIMEStatus.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

void __fastcall xxxNotifyIMEStatus(struct tagWND *a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rax
  _BYTE *v20; // rax
  _BYTE *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  v3 = *((_QWORD *)a1 + 2);
  v4 = 0LL;
  if ( v3 )
  {
    if ( gpqForeground )
    {
      if ( *(struct tagWND **)(gpqForeground + 120LL) == a1 )
      {
        v8 = *(_QWORD *)(SGDGetUserSessionState(gpqForeground) + 13952);
        if ( v8 != *(_QWORD *)(*((_QWORD *)a1 + 5) + 208LL)
          || *(_DWORD *)(SGDGetUserSessionState(v8) + 13940) != a2
          || *(_DWORD *)(SGDGetUserSessionState(v8) + 13944) != a3 )
        {
          v9 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 208LL);
          *(_QWORD *)(SGDGetUserSessionState(v8) + 13952) = v9;
          if ( *(_QWORD *)(SGDGetUserSessionState(v10) + 13952) )
          {
            *(_DWORD *)(SGDGetUserSessionState(v11) + 13940) = a2 != 0;
            *(_DWORD *)(SGDGetUserSessionState(v12) + 13944) = a3;
            if ( *(_DWORD *)(SGDGetUserSessionState(v13) + 13940) )
              v14 = *(_DWORD *)(SGDGetUserSessionState(v11) + 13944);
            else
              LOBYTE(v14) = 0;
            v15 = *(_QWORD *)(v3 + 440);
            if ( v15 )
            {
              v11 = (*(_WORD *)(v15 + 40) & 0x3FFu) - 17;
              if ( (*(_WORD *)(v15 + 40) & 0x3FF) == 0x11 )
              {
                LODWORD(v11) = 32;
                *(_BYTE *)(*(_QWORD *)(v3 + 432) + 296LL) &= ~1u;
                *(_BYTE *)(*(_QWORD *)(v3 + 432) + 296LL) &= ~2u;
                *(_BYTE *)(*(_QWORD *)(v3 + 432) + 296LL) &= ~4u;
                *(_BYTE *)(*(_QWORD *)(v3 + 432) + 296LL) &= ~8u;
                *(_BYTE *)(*(_QWORD *)(v3 + 432) + 296LL) &= ~0x10u;
                *(_BYTE *)(*(_QWORD *)(v3 + 432) + 296LL) &= ~0x20u;
                v23 = *(_QWORD *)(v3 + 432);
                if ( (v14 & 1) != 0 )
                {
                  if ( (v14 & 2) != 0 )
                  {
                    *(_BYTE *)(v23 + 296) |= 4u;
                    *(_BYTE *)(*(_QWORD *)(v3 + 432) + 296LL) |= 8u;
                  }
                  else
                  {
                    *(_BYTE *)(v23 + 296) |= 0x10u;
                    *(_BYTE *)(*(_QWORD *)(v3 + 432) + 296LL) |= 0x20u;
                  }
                }
                else
                {
                  *(_BYTE *)(v23 + 296) |= 1u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 296LL) |= 2u;
                }
                v24 = *(_QWORD *)(v3 + 432);
                if ( (v14 & 8) != 0 )
                {
                  *(_BYTE *)(v24 + 297) |= 1u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 297LL) |= 2u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 296LL) &= ~0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 296LL) &= ~0x80u;
                }
                else
                {
                  *(_BYTE *)(v24 + 296) |= 0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 296LL) |= 0x80u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 297LL) &= ~1u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 297LL) &= ~2u;
                }
                v25 = *(_QWORD *)(v3 + 432);
                if ( (v14 & 0x10) != 0 )
                {
                  *(_BYTE *)(v25 + 297) |= 4u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 297LL) |= 8u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 297LL) &= ~0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 297LL) &= ~0x20u;
                }
                else
                {
                  *(_BYTE *)(v25 + 297) |= 0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 297LL) |= 0x20u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 297LL) &= ~4u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 297LL) &= ~8u;
                }
                v26 = *(_QWORD *)(v3 + 432);
                if ( (v14 & 0x20) != 0 )
                {
                  *(_BYTE *)(v26 + 298) |= 0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 298LL) |= 0x20u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 298LL) &= ~0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 298LL) &= ~0x80u;
                }
                else
                {
                  *(_BYTE *)(v26 + 298) |= 0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 298LL) |= 0x80u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 298LL) &= ~0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 298LL) &= ~0x20u;
                }
              }
              else if ( (*(_WORD *)(v15 + 40) & 0x3FF) == 0x12 )
              {
                v11 = 241LL;
                v20 = (_BYTE *)(*(_QWORD *)(v3 + 432) + 241LL);
                if ( (v14 & 1) != 0 )
                  *v20 |= 8u;
                else
                  *v20 &= ~8u;
                v21 = (_BYTE *)(*(_QWORD *)(v3 + 432) + 241LL);
                if ( (v14 & 8) != 0 )
                  *v21 |= 0x80u;
                else
                  *v21 &= ~0x80u;
                v22 = *(_QWORD *)(v3 + 432);
                if ( (v14 & 0x40) != 0 )
                  *(_BYTE *)(v22 + 242) |= 8u;
                else
                  *(_BYTE *)(v22 + 242) &= ~8u;
              }
            }
          }
          v16 = *(_QWORD *)(v3 + 440);
          if ( v16 )
            v4 = *(_QWORD *)(v16 + 40);
          if ( ((*(_DWORD *)(v3 + 680) | *(_DWORD *)(**(_QWORD **)(v3 + 464) + 16LL)) & 0x800) != 0 )
            xxxCallHook(8, *(_QWORD *)a1, v4, 10);
          v17 = *(_DWORD *)(SGDGetUserSessionState(v11) + 13944);
          v19 = SGDGetUserSessionState(v18);
          NlsKbdSendIMENotification(*(unsigned int *)(v19 + 13940), v17);
        }
      }
    }
  }
}
