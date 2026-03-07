unsigned __int8 __fastcall CTargetStats::Ready(
        CTargetStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        struct IOverlaySwapChain *a4)
{
  int v6; // r13d
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r11
  char v12; // al
  __int64 v13; // r9
  unsigned __int8 v14; // bl
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  char v20; // bl
  unsigned __int64 v21; // rdi
  __int128 v22; // [rsp+70h] [rbp-78h] BYREF
  __int128 v23; // [rsp+80h] [rbp-68h]
  __int128 v24; // [rsp+90h] [rbp-58h]

  v6 = (int)a2;
  if ( a3 > *((_QWORD *)this + 6) )
  {
    v16 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a4 + 8LL))(a4);
    *(_DWORD *)this = v16;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    if ( v16
      && (*(int (__fastcall **)(struct IOverlaySwapChain *, __int128 *))(*(_QWORD *)a4 + 112LL))(a4, &v22) >= 0
      && (v17 = *(_DWORD *)this, v18 = v22, *(_DWORD *)this >= (unsigned int)v22) )
    {
      *((_DWORD *)this + 8) = v22;
      *((_DWORD *)this + 1) = v17 - v18;
      *((_DWORD *)this + 2) = v23;
      *((_DWORD *)this + 3) = DWORD1(v24);
      *((_QWORD *)this + 2) = *((_QWORD *)&v23 + 1);
      *((_QWORD *)this + 3) = *((_QWORD *)&v24 + 1);
      *((_DWORD *)this + 9) = DWORD1(v22);
      *((_QWORD *)this + 5) = *((_QWORD *)&v22 + 1);
      v19 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a4 + 72LL))(a4);
      *((_QWORD *)this + 6) = *((_QWORD *)&v23 + 1) + 9 * v19 / 0xAuLL;
    }
    else
    {
      *(_QWORD *)((char *)this + 4) = 0LL;
      *((_QWORD *)this + 2) = 0LL;
      *((_QWORD *)this + 3) = 0LL;
      *((_QWORD *)this + 4) = 0LL;
      *((_QWORD *)this + 5) = 0LL;
    }
  }
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( *((_DWORD *)this + 1)
    || (v12 = Microsoft_Windows_Dwm_CompositorEnableBits, (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0) )
  {
    v8 = a3 - *((_QWORD *)this + 7);
    v9 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64))(*(_QWORD *)a4 + 72LL))(a4, 1LL);
    v20 = *((_BYTE *)this + 72);
    v21 = *((_QWORD *)this + 2) + v9 * *((unsigned int *)this + 1);
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 82) + 72LL))(*((_QWORD *)g_pComposition + 82));
    v12 = Microsoft_Windows_Dwm_CompositorEnableBits;
    v10 = v21 - v9;
    if ( !v20 )
      v10 = v21;
  }
  v13 = *((unsigned int *)this + 1);
  v14 = !(_DWORD)v13 || (_DWORD)v13 == 1 && v8 >= v9 >> 1 && v10 < v11 || v8 > 8 * v9 * v13;
  if ( (v12 & 1) != 0 )
    McTemplateU0ntqtxxxxxxx_EventWriteTransfer(
      *((_QWORD *)this + 7),
      *((unsigned __int8 *)this + 72),
      v14,
      v6,
      v14,
      v13,
      *((_BYTE *)this + 72),
      v8,
      v10,
      v11,
      a3,
      *((_QWORD *)this + 7),
      v9,
      *((_QWORD *)this + 2));
  return v14;
}
