/*
 * XREFs of ?xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z @ 0x1C00FE7F8
 * Callers:
 *     NtUserNotifyIMEStatus @ 0x1C00FE710 (NtUserNotifyIMEStatus.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxNotifyIMEStatus(struct tagWND *a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r11d
  __int64 v9; // rax
  __int64 v10; // r8
  char v11; // al
  char v12; // cl
  char v13; // al
  __int64 v14; // r8
  char v15; // al
  char v16; // cl
  char v17; // al
  __int64 v18; // rdx
  char v19; // al
  char v20; // cl
  char v21; // al
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rcx
  char v28; // al

  v3 = *((_QWORD *)a1 + 2);
  v4 = 0LL;
  if ( v3 )
  {
    if ( gpqForeground )
    {
      if ( *(struct tagWND **)(gpqForeground + 112LL) == a1 )
      {
        v6 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 208LL);
        if ( gHimcFocus != v6 || gdwIMEConversionStatus != a3 || gdwIMEOpenStatus != a2 )
        {
          gHimcFocus = *(_QWORD *)(*((_QWORD *)a1 + 5) + 208LL);
          if ( v6 )
          {
            gdwIMEConversionStatus = a3;
            gdwIMEOpenStatus = a2 != 0;
            v7 = *(_QWORD *)(v3 + 440);
            v8 = a2 != 0 ? a3 : 0;
            if ( v7 )
            {
              if ( (*(_WORD *)(v7 + 40) & 0x3FF) == 0x11 )
              {
                *(_BYTE *)(*(_QWORD *)(v3 + 432) + 288LL) &= ~1u;
                *(_BYTE *)(*(_QWORD *)(v3 + 432) + 288LL) &= ~2u;
                *(_BYTE *)(*(_QWORD *)(v3 + 432) + 288LL) &= ~4u;
                *(_BYTE *)(*(_QWORD *)(v3 + 432) + 288LL) &= ~8u;
                *(_BYTE *)(*(_QWORD *)(v3 + 432) + 288LL) &= ~0x10u;
                *(_BYTE *)(*(_QWORD *)(v3 + 432) + 288LL) &= ~0x20u;
                v22 = *(_QWORD *)(v3 + 432);
                if ( (v8 & 1) != 0 )
                {
                  v23 = *(_BYTE *)(v22 + 288);
                  if ( (v8 & 2) != 0 )
                  {
                    *(_BYTE *)(v22 + 288) = v23 | 4;
                    *(_BYTE *)(*(_QWORD *)(v3 + 432) + 288LL) |= 8u;
                  }
                  else
                  {
                    *(_BYTE *)(v22 + 288) = v23 | 0x10;
                    *(_BYTE *)(*(_QWORD *)(v3 + 432) + 288LL) |= 0x20u;
                  }
                }
                else
                {
                  *(_BYTE *)(v22 + 288) |= 1u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 288LL) |= 2u;
                }
                v24 = *(_QWORD *)(v3 + 432);
                if ( (v8 & 8) != 0 )
                {
                  *(_BYTE *)(v24 + 289) |= 1u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 289LL) |= 2u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 288LL) &= ~0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 288LL) &= ~0x80u;
                }
                else
                {
                  *(_BYTE *)(v24 + 288) |= 0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 288LL) |= 0x80u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 289LL) &= ~1u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 289LL) &= ~2u;
                }
                v25 = *(_QWORD *)(v3 + 432);
                v26 = *(_BYTE *)(v25 + 289);
                if ( (v8 & 0x10) != 0 )
                {
                  *(_BYTE *)(v25 + 289) = v26 | 4;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 289LL) |= 8u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 289LL) &= ~0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 289LL) &= ~0x20u;
                }
                else
                {
                  *(_BYTE *)(v25 + 289) = v26 | 0x10;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 289LL) |= 0x20u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 289LL) &= ~4u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 289LL) &= ~8u;
                }
                v27 = *(_QWORD *)(v3 + 432);
                v28 = *(_BYTE *)(v27 + 290);
                if ( (v8 & 0x20) != 0 )
                {
                  *(_BYTE *)(v27 + 290) = v28 | 0x10;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 290LL) |= 0x20u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 290LL) &= ~0x40u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 290LL) &= ~0x80u;
                }
                else
                {
                  *(_BYTE *)(v27 + 290) = v28 | 0x40;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 290LL) |= 0x80u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 290LL) &= ~0x10u;
                  *(_BYTE *)(*(_QWORD *)(v3 + 432) + 290LL) &= ~0x20u;
                }
              }
              else if ( (*(_WORD *)(v7 + 40) & 0x3FF) == 0x12 )
              {
                v10 = *(_QWORD *)(v3 + 432);
                v11 = *(_BYTE *)(v10 + 233);
                v12 = v11 | 8;
                v13 = v11 & 0xF7;
                if ( (v8 & 1) == 0 )
                  v12 = v13;
                *(_BYTE *)(v10 + 233) = v12;
                v14 = *(_QWORD *)(v3 + 432);
                v15 = *(_BYTE *)(v14 + 233);
                v16 = v15 | 0x80;
                v17 = v15 & 0x7F;
                if ( (v8 & 8) == 0 )
                  v16 = v17;
                *(_BYTE *)(v14 + 233) = v16;
                v18 = *(_QWORD *)(v3 + 432);
                v19 = *(_BYTE *)(v18 + 234);
                v20 = v19 | 8;
                v21 = v19 & 0xF7;
                if ( (v8 & 0x40) == 0 )
                  v20 = v21;
                *(_BYTE *)(v18 + 234) = v20;
              }
            }
          }
          v9 = *(_QWORD *)(v3 + 440);
          if ( v9 )
            v4 = *(_QWORD *)(v9 + 40);
          if ( ((*(_DWORD *)(v3 + 680) | *(_DWORD *)(**(_QWORD **)(v3 + 464) + 16LL)) & 0x800) != 0 )
            xxxCallHook(8, *(_QWORD *)a1, v4, 10);
          NlsKbdSendIMENotificationBase(gdwIMEOpenStatus, (unsigned int)gdwIMEConversionStatus);
        }
      }
    }
  }
}
