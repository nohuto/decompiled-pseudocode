/*
 * XREFs of sub_1800DF480 @ 0x1800DF480
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800462E4 @ 0x1800462E4 (sub_1800462E4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1800DA884 @ 0x1800DA884 (sub_1800DA884.c)
 *     sub_1800DAB54 @ 0x1800DAB54 (sub_1800DAB54.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
__int64 __fastcall sub_1800DF480(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rbx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  __int64 *v27; // rax
  __int64 *v28; // rbx
  __int64 *v29; // rbx
  __int64 v30; // rdx
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // ebx
  __int64 v35; // rdx
  unsigned __int64 v36; // r8
  __int64 v37; // rbx
  int v38; // eax
  unsigned int v39; // ebx
  __int64 v40; // rdx
  unsigned __int64 v41; // r8
  int v42; // eax
  unsigned int v43; // ebx
  __int64 v44; // rdx
  unsigned __int64 v45; // r8
  __int64 *v46; // rax
  __int64 *v47; // rbx
  __int64 v48; // rdx
  unsigned __int64 v49; // r8
  int v50; // eax
  unsigned int v51; // edi
  __int64 v52; // rdx
  unsigned __int64 v53; // r8
  __int64 v54; // rdx
  unsigned __int64 v55; // r8
  __int64 *v56; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v57; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v58; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v61; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v62; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v64; // [rsp+70h] [rbp-98h] BYREF
  __int64 v65; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v66; // [rsp+80h] [rbp-88h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v68; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v69[16]; // [rsp+D0h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+0h]

  sub_1800462E4(&v68, a1);
  v7 = sub_180008448(v6, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v7[1], v8, (struct _TP_TIMER *)L"AudioServerGetStreamVpoContext");
  v57 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, &v57);
  v10 = v9;
  if ( v9 < 0 )
  {
    sub_18004BD84((int)retaddr, 3050, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v9);
    sub_18000F708(&v57);
    sub_18000F690((__int64)pv, v11, v12);
    EtwEventActivityIdControl(4LL, v69);
    return v10;
  }
  v59 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v59);
  v15 = v14;
  if ( v14 < 0 )
  {
    sub_18004BD84((int)retaddr, 3055, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v14);
    sub_18000F708(&v59);
    sub_18000F708(&v57);
    sub_18000F690((__int64)pv, v16, v17);
    EtwEventActivityIdControl(4LL, v69);
    return v15;
  }
  v58 = 0LL;
  v18 = v59;
  sub_1800CB144(&v58);
  v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 192LL))(v18, &v58);
  v20 = v19;
  if ( v19 < 0 )
  {
    sub_18004BD84((int)retaddr, 3060, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v19);
    sub_18000F708(&v58);
    sub_18000F708(&v59);
    sub_18000F708(&v57);
    sub_18000F690((__int64)pv, v21, v22);
    EtwEventActivityIdControl(4LL, v69);
    return v20;
  }
  v56 = 0LL;
  v62 = 0LL;
  if ( v58 )
  {
    v56 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v57 + 72LL))(v57, &v56);
    v24 = v23;
    if ( v23 < 0 )
    {
      sub_18004BD84((int)retaddr, 3067, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v23);
      sub_18000F708((__int64 *)&v56);
      sub_18000F708(&v58);
      sub_18000F708(&v59);
      sub_18000F708(&v57);
      sub_18000F690((__int64)pv, v25, v26);
      EtwEventActivityIdControl(4LL, v69);
      return v24;
    }
    v61 = v56;
    v60 = v58;
    v63 = v57;
    v27 = sub_1800DA884((__int64 *)&v64, &v63, &v60, &v61);
    sub_1800DAB54(&v62, (__int64 **)v27);
    v28 = v64;
    if ( v64 )
    {
      sub_18000F708(v64 + 2);
      sub_18000F708(v28 + 1);
      sub_18000F708(v28);
      sub_18006A148(v28);
    }
    v29 = v62;
    if ( !v62 )
    {
      sub_18004BD84((int)retaddr, 3070, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", -2147024882);
      sub_18000F708((__int64 *)&v56);
      sub_18000F708(&v58);
      sub_18000F708(&v59);
      sub_18000F708(&v57);
      sub_18000F690((__int64)pv, v30, v31);
      EtwEventActivityIdControl(4LL, v69);
      return 2147942414LL;
    }
  }
  else
  {
    v61 = 0LL;
    v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 128LL))(v59);
    v33 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 **))(*(_QWORD *)qword_18019EE50 + 24LL))(
            qword_18019EE50,
            v32,
            &v61);
    v34 = v33;
    if ( v33 < 0 )
    {
      sub_18004BD84((int)retaddr, 3077, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v33);
      sub_18000F708((__int64 *)&v61);
      sub_18000F708((__int64 *)&v56);
      sub_18000F708(&v58);
      sub_18000F708(&v59);
      sub_18000F708(&v57);
      sub_18000F690((__int64)pv, v35, v36);
      EtwEventActivityIdControl(4LL, v69);
      return v34;
    }
    v60 = 0LL;
    v37 = (__int64)v61;
    sub_1800CB144(&v60);
    v38 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 120LL))(v37, &v60);
    v39 = v38;
    if ( v38 < 0 )
    {
      sub_18004BD84((int)retaddr, 3080, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v38);
      sub_18000F708(&v60);
      sub_18000F708((__int64 *)&v61);
      sub_18000F708((__int64 *)&v56);
      sub_18000F708(&v58);
      sub_18000F708(&v59);
      sub_18000F708(&v57);
      sub_18000F690((__int64)pv, v40, v41);
      EtwEventActivityIdControl(4LL, v69);
      return v39;
    }
    v56 = 0LL;
    v42 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v60 + 96LL))(v60, &v56);
    v43 = v42;
    if ( v42 < 0 )
    {
      sub_18004BD84((int)retaddr, 3082, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v42);
      sub_18000F708(&v60);
      sub_18000F708((__int64 *)&v61);
      sub_18000F708((__int64 *)&v56);
      sub_18000F708(&v58);
      sub_18000F708(&v59);
      sub_18000F708(&v57);
      sub_18000F690((__int64)pv, v44, v45);
      EtwEventActivityIdControl(4LL, v69);
      return v43;
    }
    v64 = v56;
    v63 = v60;
    v65 = 0LL;
    v46 = sub_1800DA884((__int64 *)&v66, &v65, &v63, &v64);
    sub_1800DAB54(&v62, (__int64 **)v46);
    v47 = v66;
    if ( v66 )
    {
      sub_18000F708(v66 + 2);
      sub_18000F708(v47 + 1);
      sub_18000F708(v47);
      sub_18006A148(v47);
    }
    v29 = v62;
    if ( !v62 )
    {
      sub_18004BD84((int)retaddr, 3085, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", -2147024882);
      sub_18000F708(&v60);
      sub_18000F708((__int64 *)&v61);
      sub_18000F708((__int64 *)&v56);
      sub_18000F708(&v58);
      sub_18000F708(&v59);
      sub_18000F708(&v57);
      sub_18000F690((__int64)pv, v48, v49);
      EtwEventActivityIdControl(4LL, v69);
      return 2147942414LL;
    }
    sub_18000F708(&v60);
    sub_18000F708((__int64 *)&v61);
  }
  v50 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v56 + 32))(v56, a2);
  v51 = v50;
  if ( v50 >= 0 )
  {
    *a3 = v29;
    sub_18000F708((__int64 *)&v56);
    sub_18000F708(&v58);
    sub_18000F708(&v59);
    sub_18000F708(&v57);
    sub_18000F690((__int64)pv, v54, v55);
    EtwEventActivityIdControl(4LL, v69);
    return 0LL;
  }
  else
  {
    sub_18004BD84((int)retaddr, 3089, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v50);
    sub_18000F708(v29 + 2);
    sub_18000F708(v29 + 1);
    sub_18000F708(v29);
    sub_18006A148(v29);
    sub_18000F708((__int64 *)&v56);
    sub_18000F708(&v58);
    sub_18000F708(&v59);
    sub_18000F708(&v57);
    sub_18000F690((__int64)pv, v52, v53);
    EtwEventActivityIdControl(4LL, v69);
    return v51;
  }
}
