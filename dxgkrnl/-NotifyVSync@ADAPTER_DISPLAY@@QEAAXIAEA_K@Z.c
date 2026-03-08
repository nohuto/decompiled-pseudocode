/*
 * XREFs of ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x1C000EEBC
 * Callers:
 *     ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C000ED70 (-NotifyVSync@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

void __fastcall ADAPTER_DISPLAY::NotifyVSync(ADAPTER_DISPLAY *this, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int16 v15; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+38h] [rbp-50h] BYREF
  __int16 *v17; // [rsp+58h] [rbp-30h]
  __int64 v18; // [rsp+60h] [rbp-28h]

  if ( a2 < *((_DWORD *)this + 24) )
  {
    _mm_lfence();
    v5 = 4000LL * a2;
    v6 = *((_QWORD *)this + 16);
    v7 = *(unsigned int *)(v5 + v6 + 3780);
    if ( (_DWORD)v7 )
    {
      v8 = *(unsigned int *)(v5 + v6 + 3780);
      v9 = 10 * v7;
      v10 = *((_QWORD *)this + 10 * v7 + 116);
      if ( v10 )
      {
        if ( !*((_DWORD *)this + 20 * v7 + 216) )
        {
          *((_QWORD *)this + 10 * v7 + 114) = 0LL;
          *((_QWORD *)this + 10 * v7 + 115) = 0LL;
          return;
        }
        v11 = *((_QWORD *)this + 10 * v7 + 114);
        v12 = *a3;
        if ( !v11 )
          goto LABEL_18;
        if ( v12 - v11 > (unsigned __int64)*((unsigned int *)this + 20 * v7 + 226) )
        {
          if ( *((_QWORD *)this + 10 * v7 + 115) )
          {
            v13 = *((_DWORD *)this + 20 * v7 + 230) - *((_DWORD *)this + 20 * v7 + 228);
            ++*((_DWORD *)this + 2 * v9 + 222);
            *((_DWORD *)this + 2 * v9 + 225) += v13 >> 4;
            v14 = v13 >> 6;
            if ( v14 >= 0x80 )
              v14 = 127;
            ++*(_DWORD *)(3 * v14 + v10);
          }
          else if ( !*((_BYTE *)this + 80 * v8 + 880) )
          {
            ++*((_DWORD *)this + 20 * v7 + 221);
            if ( (unsigned int)dword_1C013A8E0 > 5 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C013A8E0, 0x4000LL) )
              {
                v15 = 0;
                v17 = &v15;
                v18 = 2LL;
                tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C013A8E0, (int)&dword_1C009DD47, 0, 0, 3u, &v16);
                v12 = *a3;
              }
            }
          }
          *((_QWORD *)this + v9 + 115) = 0LL;
LABEL_18:
          *((_QWORD *)this + v9 + 114) = v12;
          return;
        }
        *((_QWORD *)this + 10 * v7 + 115) = v12;
        *((_BYTE *)this + 80 * v8 + 880) = 0;
      }
    }
  }
}
