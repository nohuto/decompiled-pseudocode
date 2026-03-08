/*
 * XREFs of ?AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z @ 0x1800C6BD4
 * Callers:
 *     ?PostPresent@CLegacySwapChain@@MEAAJ_N0@Z @ 0x1800C6AC0 (-PostPresent@CLegacySwapChain@@MEAAJ_N0@Z.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1800C7F18 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x180285070 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ?PostPresent@CDDisplaySwapChain@@MEAAJ_N0@Z @ 0x180287E60 (-PostPresent@CDDisplaySwapChain@@MEAAJ_N0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

void __fastcall CD3DDevice::AdvanceUnpin(CD3DDevice *this, struct _LUID a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // rax
  char v5; // r10
  __int64 v6; // r11
  char v7; // cl
  int v8; // ecx
  int v9; // [rsp+30h] [rbp-19h] BYREF
  struct _LUID v10; // [rsp+38h] [rbp-11h] BYREF
  struct _LUID v11; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v12[16]; // [rsp+50h] [rbp+7h] BYREF
  struct _LUID *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  int *v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  struct _LUID *v19; // [rsp+80h] [rbp+37h]
  int v20; // [rsp+88h] [rbp+3Fh]
  int v21; // [rsp+8Ch] [rbp+43h]

  v4 = *((_QWORD *)this + 150);
  v5 = 0;
  v6 = *((_QWORD *)this + 151);
  v10 = a2;
  while ( v4 != v6 )
  {
    if ( a4 )
    {
      *(_DWORD *)(v4 + 28) = 0;
LABEL_8:
      v7 = 1;
      goto LABEL_13;
    }
    v8 = *(_DWORD *)(v4 + 28);
    if ( v8 && *(_QWORD *)(v4 + 16) == a2 && *(_DWORD *)(v4 + 24) == (_DWORD)a3 )
    {
      *(_DWORD *)(v4 + 28) = v8 - 1;
      goto LABEL_8;
    }
    v7 = 0;
LABEL_13:
    v5 |= v7;
    v4 += 32LL;
  }
  if ( v5 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v10.LowPart = a4;
      v13 = &v11;
      v16 = &v9;
      v19 = &v10;
      v11 = a2;
      v9 = a3;
      v14 = 8;
      v17 = 4;
      v20 = 4;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &Pinning_AdvanceUnpin,
        a3,
        4LL,
        v12);
    }
  }
}
