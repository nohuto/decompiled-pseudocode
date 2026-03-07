void __fastcall sub_1400137D0(__int64 a1, __int64 a2)
{
  unsigned int *v4; // rax
  __int64 v5; // rbx
  __int64 (__fastcall **v6)(PVOID); // rdx
  __int64 (__fastcall *v7)(PVOID); // rax
  PVOID v8; // rbx
  PVOID v9; // r14
  PVOID v10; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall **v12)(PVOID); // rax
  __int64 (__fastcall *v13)(PVOID); // rax
  PVOID v14; // rbx
  PVOID v15; // rdx
  PVOID v16; // rbx
  PVOID v17; // rdx
  __int64 v18; // rbx
  __int64 (__fastcall **v19)(PVOID); // rax
  __int64 (__fastcall *v20)(PVOID); // rax
  PVOID v21; // rbx
  PVOID v22; // rdx
  __int64 v23; // rbx
  __int64 (__fastcall **v24)(PVOID); // rax
  __int64 (__fastcall *v25)(PVOID); // rax
  PVOID v26; // rbx
  PVOID v27; // rdx
  __int64 v28; // rbx
  __int64 (__fastcall **v29)(PVOID); // rax
  __int64 (__fastcall *v30)(PVOID); // rax
  PVOID v31; // rbx
  PVOID v32; // rdx
  __int64 v33; // rbx
  __int64 (__fastcall **v34)(PVOID); // rax
  __int64 (__fastcall *v35)(PVOID); // rax
  PVOID v36; // rbx
  __int64 (__fastcall **v37)(PVOID); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+30h] [rbp-D8h]
  PVOID v39; // [rsp+38h] [rbp-D0h]
  __int64 v40; // [rsp+40h] [rbp-C8h]
  __int64 v41; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall **v42)(PVOID); // [rsp+50h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h]
  __int64 v45; // [rsp+68h] [rbp-A0h]
  __int64 v46; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v47)(PVOID); // [rsp+78h] [rbp-90h] BYREF
  __int16 v48; // [rsp+80h] [rbp-88h]
  PVOID v49; // [rsp+88h] [rbp-80h]
  __int64 v50; // [rsp+90h] [rbp-78h]
  __int64 v51; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v52)(PVOID); // [rsp+A0h] [rbp-68h] BYREF
  __int16 v53; // [rsp+A8h] [rbp-60h]
  PVOID v54; // [rsp+B0h] [rbp-58h]
  __int64 v55; // [rsp+B8h] [rbp-50h]
  __int64 v56; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall **v57)(PVOID); // [rsp+C8h] [rbp-40h] BYREF
  __int16 v58; // [rsp+D0h] [rbp-38h]
  PVOID v59; // [rsp+D8h] [rbp-30h]
  __int64 v60; // [rsp+E0h] [rbp-28h]
  __int64 v61; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall **v62)(PVOID); // [rsp+F0h] [rbp-18h] BYREF
  __int16 v63; // [rsp+F8h] [rbp-10h]
  PVOID v64; // [rsp+100h] [rbp-8h]
  __int64 v65; // [rsp+108h] [rbp+0h]
  __int64 v66; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall **v67)(PVOID); // [rsp+118h] [rbp+10h] BYREF
  __int16 v68; // [rsp+120h] [rbp+18h]
  PVOID v69; // [rsp+128h] [rbp+20h]
  __int64 v70; // [rsp+130h] [rbp+28h]
  __int64 v71; // [rsp+138h] [rbp+30h]
  __int64 (__fastcall **v72)(PVOID); // [rsp+140h] [rbp+38h] BYREF
  __int16 v73; // [rsp+148h] [rbp+40h]
  PVOID v74; // [rsp+150h] [rbp+48h]
  __int64 v75; // [rsp+158h] [rbp+50h]
  __int64 v76; // [rsp+160h] [rbp+58h]
  __int64 (__fastcall **v77)(PVOID); // [rsp+168h] [rbp+60h] BYREF
  __int16 v78; // [rsp+170h] [rbp+68h]
  PVOID v79; // [rsp+178h] [rbp+70h]
  __int64 v80; // [rsp+180h] [rbp+78h]
  __int64 v81; // [rsp+188h] [rbp+80h]
  __int64 (__fastcall **v82)(PVOID); // [rsp+190h] [rbp+88h] BYREF
  __int16 v83; // [rsp+198h] [rbp+90h]
  PVOID v84; // [rsp+1A0h] [rbp+98h]
  __int64 v85; // [rsp+1A8h] [rbp+A0h]
  __int64 v86; // [rsp+1B0h] [rbp+A8h]
  __int64 (__fastcall **v87)(PVOID); // [rsp+1B8h] [rbp+B0h] BYREF
  __int16 v88; // [rsp+1C0h] [rbp+B8h]
  PVOID v89; // [rsp+1C8h] [rbp+C0h]
  __int64 v90; // [rsp+1D0h] [rbp+C8h]
  __int64 v91; // [rsp+1D8h] [rbp+D0h]
  __int64 (__fastcall **v92)(PVOID); // [rsp+1E0h] [rbp+D8h] BYREF
  __int16 v93; // [rsp+1E8h] [rbp+E0h]
  PVOID v94; // [rsp+1F0h] [rbp+E8h]
  __int64 v95; // [rsp+1F8h] [rbp+F0h]
  __int64 v96; // [rsp+200h] [rbp+F8h]
  __int64 (__fastcall **v97)(PVOID); // [rsp+208h] [rbp+100h] BYREF
  __int64 (__fastcall **v98)(); // [rsp+210h] [rbp+108h]
  unsigned __int64 v99; // [rsp+250h] [rbp+148h]
  __int64 v100; // [rsp+258h] [rbp+150h]
  __int64 v101; // [rsp+260h] [rbp+158h]
  __int64 (__fastcall **v102)(PVOID); // [rsp+268h] [rbp+160h] BYREF
  __int64 (__fastcall **v103)(); // [rsp+270h] [rbp+168h]
  unsigned __int64 v104; // [rsp+2B0h] [rbp+1A8h]
  __int64 v105; // [rsp+2B8h] [rbp+1B0h]
  __int64 v106; // [rsp+2C0h] [rbp+1B8h]
  __int64 (__fastcall **v107)(PVOID); // [rsp+2C8h] [rbp+1C0h] BYREF
  __int64 (__fastcall **v108)(); // [rsp+2D0h] [rbp+1C8h]
  unsigned __int64 v109; // [rsp+310h] [rbp+208h]
  __int64 v110; // [rsp+318h] [rbp+210h]
  __int64 v111; // [rsp+320h] [rbp+218h]
  __int64 (__fastcall **v112)(PVOID); // [rsp+328h] [rbp+220h] BYREF
  __int64 (__fastcall **v113)(); // [rsp+330h] [rbp+228h]
  unsigned __int64 v114; // [rsp+370h] [rbp+268h]
  __int64 v115; // [rsp+378h] [rbp+270h]
  __int64 v116; // [rsp+380h] [rbp+278h]
  __int64 (__fastcall **v117)(PVOID); // [rsp+388h] [rbp+280h] BYREF
  __int64 (__fastcall **v118)(); // [rsp+390h] [rbp+288h]
  unsigned __int64 v119; // [rsp+3D0h] [rbp+2C8h]
  __int64 v120; // [rsp+3D8h] [rbp+2D0h]
  __int64 v121; // [rsp+3E0h] [rbp+2D8h]

  sub_140085E40();
  v4 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 640) + 8LL))(*(_QWORD *)(a1 + 640));
  v42 = &off_1400D41D0;
  LOWORD(v43) = 0;
  v5 = *v4;
  P = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  sub_1400011A8(&v42, (__int64)L"writeBackHead", 0xDuLL);
  sub_1400120E0((__int64)&v112, (__int64)&v42);
  v113 = off_1400D5638;
  v116 = 10LL;
  v6 = &off_1400D5610;
  v112 = &off_1400D5610;
  v114 = 0xA5A5A5A5A5000012uLL;
  v115 = v5;
  v42 = &off_1400D41D0;
  if ( P )
  {
    ExFreePool(P);
    v6 = v112;
  }
  v7 = v6[4];
  P = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v7)(&v112, a2);
  v47 = &off_1400D41D0;
  v48 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  sub_1400011A8(&v47, (__int64)qword_1400B6F30, 1uLL);
  v8 = v49;
  v9 = &unk_1400D44E0;
  v10 = &unk_1400D44E0;
  if ( v49 )
    v10 = v49;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v10, 2 * v50);
  v47 = &off_1400D41D0;
  if ( v8 )
    ExFreePool(v8);
  v49 = 0LL;
  v113 = off_1400D5638;
  v50 = 0LL;
  v51 = 0LL;
  v112 = &off_1400D5610;
  sub_140005CFC(&v112);
  v52 = &off_1400D41D0;
  v53 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  sub_1400011A8(&v52, (__int64)L"st_segmentationOffloadCounter", 0x1DuLL);
  v11 = *(_QWORD *)(a1 + 720);
  sub_1400120E0((__int64)&v117, (__int64)&v52);
  v121 = 10LL;
  v118 = off_1400D4720;
  v52 = &off_1400D41D0;
  v12 = &off_1400D46F8;
  v117 = &off_1400D46F8;
  v119 = 0xA5A5A5A5A5000012uLL;
  v120 = v11;
  if ( v54 )
  {
    ExFreePool(v54);
    v12 = v117;
  }
  v13 = v12[4];
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v13)(&v117, a2);
  v57 = &off_1400D41D0;
  v58 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  sub_1400011A8(&v57, (__int64)qword_1400B6F30, 1uLL);
  v14 = v59;
  v15 = &unk_1400D44E0;
  if ( v59 )
    v15 = v59;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v15, 2 * v60);
  v57 = &off_1400D41D0;
  if ( v14 )
    ExFreePool(v14);
  v59 = 0LL;
  v118 = off_1400D4720;
  v60 = 0LL;
  v61 = 0LL;
  v117 = &off_1400D46F8;
  sub_140005CFC(&v117);
  sub_140003990(a2, 0);
  v62 = &off_1400D41D0;
  v63 = 0;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  sub_1400011A8(&v62, (__int64)L"Context Descriptor\n", 0x13uLL);
  v16 = v64;
  v17 = &unk_1400D44E0;
  if ( v64 )
    v17 = v64;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v17, 2 * v65);
  v62 = &off_1400D41D0;
  if ( v16 )
    ExFreePool(v16);
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = &off_1400D41D0;
  v68 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  sub_1400011A8(&v67, (__int64)L"vlan_macip_lens", 0xFuLL);
  v18 = *(unsigned int *)(a1 + 656);
  sub_1400120E0((__int64)&v102, (__int64)&v67);
  v106 = 10LL;
  v103 = off_1400D4720;
  v19 = &off_1400D46F8;
  v102 = &off_1400D46F8;
  v104 = 0xA5A5A5A5A5000012uLL;
  v105 = v18;
  v67 = &off_1400D41D0;
  if ( v69 )
  {
    ExFreePool(v69);
    v19 = v102;
  }
  v20 = v19[4];
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v106 = 16LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v20)(&v102, a2);
  v72 = &off_1400D41D0;
  v73 = 0;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  sub_1400011A8(&v72, (__int64)qword_1400B6F30, 1uLL);
  v21 = v74;
  v22 = &unk_1400D44E0;
  if ( v74 )
    v22 = v74;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v22, 2 * v75);
  v72 = &off_1400D41D0;
  if ( v21 )
    ExFreePool(v21);
  v74 = 0LL;
  v103 = off_1400D4720;
  v75 = 0LL;
  v76 = 0LL;
  v102 = &off_1400D46F8;
  sub_140005CFC(&v102);
  v77 = &off_1400D41D0;
  v78 = 0;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  sub_1400011A8(&v77, (__int64)L"type_tucmd_mlhl", 0xFuLL);
  v23 = *(unsigned int *)(a1 + 664);
  sub_1400120E0((__int64)&v107, (__int64)&v77);
  v111 = 10LL;
  v108 = off_1400D4720;
  v24 = &off_1400D46F8;
  v107 = &off_1400D46F8;
  v109 = 0xA5A5A5A5A5000012uLL;
  v110 = v23;
  v77 = &off_1400D41D0;
  if ( v79 )
  {
    ExFreePool(v79);
    v24 = v107;
  }
  v25 = v24[4];
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v111 = 16LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v25)(&v107, a2);
  v82 = &off_1400D41D0;
  v83 = 0;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  sub_1400011A8(&v82, (__int64)qword_1400B6F30, 1uLL);
  v26 = v84;
  v27 = &unk_1400D44E0;
  if ( v84 )
    v27 = v84;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v27, 2 * v85);
  v82 = &off_1400D41D0;
  if ( v26 )
    ExFreePool(v26);
  v84 = 0LL;
  v108 = off_1400D4720;
  v85 = 0LL;
  v86 = 0LL;
  v107 = &off_1400D46F8;
  sub_140005CFC(&v107);
  v87 = &off_1400D41D0;
  v88 = 0;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  sub_1400011A8(&v87, (__int64)L"mss_l4len_idx", 0xDuLL);
  v28 = *(unsigned int *)(a1 + 668);
  sub_1400120E0((__int64)&v97, (__int64)&v87);
  v101 = 10LL;
  v98 = off_1400D4720;
  v29 = &off_1400D46F8;
  v97 = &off_1400D46F8;
  v99 = 0xA5A5A5A5A5000012uLL;
  v100 = v28;
  v87 = &off_1400D41D0;
  if ( v89 )
  {
    ExFreePool(v89);
    v29 = v97;
  }
  v30 = v29[4];
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v101 = 16LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v30)(&v97, a2);
  v92 = &off_1400D41D0;
  v93 = 0;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  sub_1400011A8(&v92, (__int64)qword_1400B6F30, 1uLL);
  v31 = v94;
  v32 = &unk_1400D44E0;
  if ( v94 )
    v32 = v94;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v32, 2 * v95);
  v92 = &off_1400D41D0;
  if ( v31 )
    ExFreePool(v31);
  v94 = 0LL;
  v98 = off_1400D4720;
  v95 = 0LL;
  v96 = 0LL;
  v97 = &off_1400D46F8;
  sub_140005CFC(&v97);
  v37 = &off_1400D41D0;
  LOWORD(v38) = 0;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  sub_1400011A8(&v37, (__int64)L"seqnum_seed", 0xBuLL);
  v33 = *(unsigned int *)(a1 + 660);
  sub_1400120E0((__int64)&v97, (__int64)&v37);
  v101 = 10LL;
  v98 = off_1400D4720;
  v34 = &off_1400D46F8;
  v97 = &off_1400D46F8;
  v99 = 0xA5A5A5A5A5000012uLL;
  v100 = v33;
  if ( v39 )
  {
    ExFreePool(v39);
    v34 = v97;
  }
  v35 = v34[4];
  v101 = 16LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v35)(&v97, a2);
  v37 = &off_1400D41D0;
  LOWORD(v38) = 0;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  sub_1400011A8(&v37, (__int64)qword_1400B6F30, 1uLL);
  v36 = v39;
  if ( v39 )
    v9 = v39;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v40);
  if ( v36 )
    ExFreePool(v36);
  v97 = &off_1400D46F8;
  v98 = off_1400D4720;
  sub_140005CFC(&v97);
  sub_140003990(a2, 0);
  v37 = &off_1400D41D0;
  LOWORD(v38) = 0;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  sub_1400011A8(&v37, (__int64)L"Current Fragment Descriptor", 0x1BuLL);
  sub_140084398(a1, a2, &v37, a1 + 672);
  v37 = &off_1400D41D0;
  if ( v39 )
    ExFreePool(v39);
}
