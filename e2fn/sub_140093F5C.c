void *(__fastcall **__fastcall sub_140093F5C(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        int a4))(CUnknown *__hidden this, unsigned int)
{
  __int64 v7; // rbx
  __int64 (__fastcall **v8)(PVOID); // rdx
  PVOID v9; // r15
  PVOID v10; // rbx
  PVOID v11; // rdx
  __int64 v12; // rbx
  __int64 (__fastcall **v13)(PVOID); // rdx
  PVOID v14; // rbx
  PVOID v15; // rdx
  __int64 v16; // rbx
  __int64 (__fastcall **v17)(PVOID); // rdx
  PVOID v18; // rbx
  PVOID v19; // rdx
  __int64 v20; // rbx
  __int64 (__fastcall **v21)(PVOID); // rdx
  PVOID v22; // rbx
  PVOID v23; // rdx
  __int64 v24; // rbx
  __int64 (__fastcall **v25)(PVOID); // rdx
  PVOID v26; // rbx
  PVOID v27; // rdx
  __int64 v28; // rbx
  __int64 (__fastcall **v29)(PVOID); // rdx
  PVOID v30; // rdx
  PVOID v31; // rbx
  __int64 v32; // rbx
  __int64 (__fastcall **v33)(PVOID); // rdx
  PVOID v34; // rbx
  void *(__fastcall **result)(CUnknown *__hidden, unsigned int); // rax
  __int64 (__fastcall **v36)(PVOID); // [rsp+20h] [rbp-E0h] BYREF
  __int16 v37; // [rsp+28h] [rbp-D8h]
  PVOID v38; // [rsp+30h] [rbp-D0h]
  __int64 v39; // [rsp+38h] [rbp-C8h]
  __int64 v40; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall **v41)(PVOID); // [rsp+48h] [rbp-B8h] BYREF
  __int16 v42; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall **v46)(PVOID); // [rsp+70h] [rbp-90h] BYREF
  __int16 v47; // [rsp+78h] [rbp-88h]
  PVOID v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall **v51)(PVOID); // [rsp+98h] [rbp-68h] BYREF
  __int16 v52; // [rsp+A0h] [rbp-60h]
  PVOID v53; // [rsp+A8h] [rbp-58h]
  __int64 v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall **v56)(PVOID); // [rsp+C0h] [rbp-40h] BYREF
  __int16 v57; // [rsp+C8h] [rbp-38h]
  PVOID v58; // [rsp+D0h] [rbp-30h]
  __int64 v59; // [rsp+D8h] [rbp-28h]
  __int64 v60; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall **v61)(PVOID); // [rsp+E8h] [rbp-18h] BYREF
  __int16 v62; // [rsp+F0h] [rbp-10h]
  PVOID v63; // [rsp+F8h] [rbp-8h]
  __int64 v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall **v66)(PVOID); // [rsp+110h] [rbp+10h] BYREF
  __int16 v67; // [rsp+118h] [rbp+18h]
  PVOID v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  __int64 v70; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall **v71)(PVOID); // [rsp+138h] [rbp+38h] BYREF
  __int16 v72; // [rsp+140h] [rbp+40h]
  PVOID v73; // [rsp+148h] [rbp+48h]
  __int64 v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall **v76)(PVOID); // [rsp+160h] [rbp+60h] BYREF
  __int16 v77; // [rsp+168h] [rbp+68h]
  PVOID v78; // [rsp+170h] [rbp+70h]
  __int64 v79; // [rsp+178h] [rbp+78h]
  __int64 v80; // [rsp+180h] [rbp+80h]
  __int64 (__fastcall **v81)(PVOID); // [rsp+188h] [rbp+88h] BYREF
  __int16 v82; // [rsp+190h] [rbp+90h]
  PVOID v83; // [rsp+198h] [rbp+98h]
  __int64 v84; // [rsp+1A0h] [rbp+A0h]
  __int64 v85; // [rsp+1A8h] [rbp+A8h]
  __int64 (__fastcall **v86)(PVOID); // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v87; // [rsp+1B8h] [rbp+B8h]
  PVOID v88; // [rsp+1C0h] [rbp+C0h]
  __int64 v89; // [rsp+1C8h] [rbp+C8h]
  __int64 v90; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall **v91)(PVOID); // [rsp+1D8h] [rbp+D8h] BYREF
  __int16 v92; // [rsp+1E0h] [rbp+E0h]
  PVOID v93; // [rsp+1E8h] [rbp+E8h]
  __int64 v94; // [rsp+1F0h] [rbp+F0h]
  __int64 v95; // [rsp+1F8h] [rbp+F8h]
  __int64 (__fastcall **v96)(PVOID); // [rsp+200h] [rbp+100h] BYREF
  __int64 (__fastcall **v97)(); // [rsp+208h] [rbp+108h]
  unsigned __int64 v98; // [rsp+248h] [rbp+148h]
  __int64 v99; // [rsp+250h] [rbp+150h]
  __int64 v100; // [rsp+258h] [rbp+158h]
  __int64 (__fastcall **v101)(PVOID); // [rsp+260h] [rbp+160h] BYREF
  __int16 v102; // [rsp+268h] [rbp+168h]
  PVOID v103; // [rsp+270h] [rbp+170h]
  __int64 v104; // [rsp+278h] [rbp+178h]
  __int64 v105; // [rsp+280h] [rbp+180h]
  __int64 (__fastcall **v106)(PVOID); // [rsp+290h] [rbp+190h] BYREF
  __int64 (__fastcall **v107)(); // [rsp+298h] [rbp+198h]
  unsigned __int64 v108; // [rsp+2D8h] [rbp+1D8h]
  __int64 v109; // [rsp+2E0h] [rbp+1E0h]
  __int64 v110; // [rsp+2E8h] [rbp+1E8h]
  __int64 (__fastcall **v111)(PVOID); // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 (__fastcall **v112)(); // [rsp+2F8h] [rbp+1F8h]
  unsigned __int64 v113; // [rsp+338h] [rbp+238h]
  __int64 v114; // [rsp+340h] [rbp+240h]
  __int64 v115; // [rsp+348h] [rbp+248h]
  __int64 (__fastcall **v116)(PVOID); // [rsp+350h] [rbp+250h] BYREF
  __int64 (__fastcall **v117)(); // [rsp+358h] [rbp+258h]
  unsigned __int64 v118; // [rsp+398h] [rbp+298h]
  __int64 v119; // [rsp+3A0h] [rbp+2A0h]
  __int64 v120; // [rsp+3A8h] [rbp+2A8h]
  __int64 (__fastcall **v121)(PVOID); // [rsp+3B0h] [rbp+2B0h] BYREF
  __int64 (__fastcall **v122)(); // [rsp+3B8h] [rbp+2B8h]
  unsigned __int64 v123; // [rsp+3F8h] [rbp+2F8h]
  __int64 v124; // [rsp+400h] [rbp+300h]
  __int64 v125; // [rsp+408h] [rbp+308h]
  __int64 (__fastcall **v126)(PVOID); // [rsp+410h] [rbp+310h] BYREF
  __int64 (__fastcall **v127)(); // [rsp+418h] [rbp+318h]
  unsigned __int64 v128; // [rsp+458h] [rbp+358h]
  __int64 v129; // [rsp+460h] [rbp+360h]
  __int64 v130; // [rsp+468h] [rbp+368h]

  if ( a2 )
  {
    v41 = &off_1400D41D0;
    v42 = 0;
    P = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    sub_1400011A8(&v41, (__int64)L"BeginIndex", 0xAuLL);
    v7 = *((unsigned int *)a2 + 12);
    sub_1400120E0((__int64)&v111, (__int64)&v41);
    v111 = &off_1400D5610;
    v8 = &off_1400D5610;
    v115 = 10LL;
    v112 = off_1400D5638;
    v113 = 0xA5A5A5A5A5000012uLL;
    v114 = v7;
    v41 = &off_1400D41D0;
    if ( P )
    {
      ExFreePool(P);
      v8 = v111;
    }
    P = 0LL;
    v9 = &unk_1400D44E0;
    v44 = 0LL;
    v45 = 0LL;
    if ( !a4 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v8[4])(&v111, a3);
      v46 = &off_1400D41D0;
      v47 = 0;
      v48 = 0LL;
      v49 = 0LL;
      v50 = 0LL;
      sub_1400011A8(&v46, (__int64)qword_1400B6F30, 1uLL);
      v10 = v48;
      v11 = &unk_1400D44E0;
      if ( v48 )
        v11 = v48;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a3 + 8LL))(a3, v11, 2 * v49);
      v46 = &off_1400D41D0;
      if ( v10 )
        ExFreePool(v10);
      v48 = 0LL;
      v49 = 0LL;
      v50 = 0LL;
    }
    v111 = &off_1400D5610;
    v112 = off_1400D5638;
    sub_140005CFC(&v111);
    v51 = &off_1400D41D0;
    v52 = 0;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    sub_1400011A8(&v51, (__int64)L"EndIndex", 8uLL);
    v12 = *((unsigned int *)a2 + 3);
    sub_1400120E0((__int64)&v116, (__int64)&v51);
    v116 = &off_1400D5610;
    v13 = &off_1400D5610;
    v120 = 10LL;
    v117 = off_1400D5638;
    v118 = 0xA5A5A5A5A5000012uLL;
    v119 = v12;
    v51 = &off_1400D41D0;
    if ( v53 )
    {
      ExFreePool(v53);
      v13 = v116;
    }
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    if ( !a4 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v13[4])(&v116, a3);
      v56 = &off_1400D41D0;
      v57 = 0;
      v58 = 0LL;
      v59 = 0LL;
      v60 = 0LL;
      sub_1400011A8(&v56, (__int64)qword_1400B6F30, 1uLL);
      v14 = v58;
      v15 = &unk_1400D44E0;
      if ( v58 )
        v15 = v58;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a3 + 8LL))(a3, v15, 2 * v59);
      v56 = &off_1400D41D0;
      if ( v14 )
        ExFreePool(v14);
      v58 = 0LL;
      v59 = 0LL;
      v60 = 0LL;
    }
    v116 = &off_1400D5610;
    v117 = off_1400D5638;
    sub_140005CFC(&v116);
    v61 = &off_1400D41D0;
    v62 = 0;
    v63 = 0LL;
    v64 = 0LL;
    v65 = 0LL;
    sub_1400011A8(&v61, (__int64)L"NextIndex", 9uLL);
    v16 = *((unsigned int *)a2 + 13);
    sub_1400120E0((__int64)&v121, (__int64)&v61);
    v121 = &off_1400D5610;
    v17 = &off_1400D5610;
    v125 = 10LL;
    v122 = off_1400D5638;
    v123 = 0xA5A5A5A5A5000012uLL;
    v124 = v16;
    v61 = &off_1400D41D0;
    if ( v63 )
    {
      ExFreePool(v63);
      v17 = v121;
    }
    v63 = 0LL;
    v64 = 0LL;
    v65 = 0LL;
    if ( !a4 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v17[4])(&v121, a3);
      v66 = &off_1400D41D0;
      v67 = 0;
      v68 = 0LL;
      v69 = 0LL;
      v70 = 0LL;
      sub_1400011A8(&v66, (__int64)qword_1400B6F30, 1uLL);
      v18 = v68;
      v19 = &unk_1400D44E0;
      if ( v68 )
        v19 = v68;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a3 + 8LL))(a3, v19, 2 * v69);
      v66 = &off_1400D41D0;
      if ( v18 )
        ExFreePool(v18);
      v68 = 0LL;
      v69 = 0LL;
      v70 = 0LL;
    }
    v121 = &off_1400D5610;
    v122 = off_1400D5638;
    sub_140005CFC(&v121);
    v71 = &off_1400D41D0;
    v72 = 0;
    v73 = 0LL;
    v74 = 0LL;
    v75 = 0LL;
    sub_1400011A8(&v71, (__int64)L"NumberOfElements", 0x10uLL);
    v20 = *((unsigned int *)a2 + 1);
    sub_1400120E0((__int64)&v126, (__int64)&v71);
    v126 = &off_1400D5610;
    v21 = &off_1400D5610;
    v130 = 10LL;
    v127 = off_1400D5638;
    v128 = 0xA5A5A5A5A5000012uLL;
    v129 = v20;
    v71 = &off_1400D41D0;
    if ( v73 )
    {
      ExFreePool(v73);
      v21 = v126;
    }
    v73 = 0LL;
    v74 = 0LL;
    v75 = 0LL;
    if ( !a4 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v21[4])(&v126, a3);
      v76 = &off_1400D41D0;
      v77 = 0;
      v78 = 0LL;
      v79 = 0LL;
      v80 = 0LL;
      sub_1400011A8(&v76, (__int64)qword_1400B6F30, 1uLL);
      v22 = v78;
      v23 = &unk_1400D44E0;
      if ( v78 )
        v23 = v78;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a3 + 8LL))(a3, v23, 2 * v79);
      v76 = &off_1400D41D0;
      if ( v22 )
        ExFreePool(v22);
      v78 = 0LL;
      v79 = 0LL;
      v80 = 0LL;
    }
    v126 = &off_1400D5610;
    v127 = off_1400D5638;
    sub_140005CFC(&v126);
    v81 = &off_1400D41D0;
    v82 = 0;
    v83 = 0LL;
    v84 = 0LL;
    v85 = 0LL;
    sub_1400011A8(&v81, (__int64)L"ElementIndexMask", 0x10uLL);
    v24 = *((unsigned int *)a2 + 2);
    sub_1400120E0((__int64)&v106, (__int64)&v81);
    v106 = &off_1400D5610;
    v25 = &off_1400D5610;
    v110 = 10LL;
    v107 = off_1400D5638;
    v108 = 0xA5A5A5A5A5000012uLL;
    v109 = v24;
    v81 = &off_1400D41D0;
    if ( v83 )
    {
      ExFreePool(v83);
      v25 = v106;
    }
    v83 = 0LL;
    v84 = 0LL;
    v85 = 0LL;
    v110 = 16LL;
    if ( !a4 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v25[4])(&v106, a3);
      v86 = &off_1400D41D0;
      v87 = 0;
      v88 = 0LL;
      v89 = 0LL;
      v90 = 0LL;
      sub_1400011A8(&v86, (__int64)qword_1400B6F30, 1uLL);
      v26 = v88;
      v27 = &unk_1400D44E0;
      if ( v88 )
        v27 = v88;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a3 + 8LL))(a3, v27, 2 * v89);
      v86 = &off_1400D41D0;
      if ( v26 )
        ExFreePool(v26);
      v88 = 0LL;
      v89 = 0LL;
      v90 = 0LL;
    }
    v106 = &off_1400D5610;
    v107 = off_1400D5638;
    sub_140005CFC(&v106);
    v91 = &off_1400D41D0;
    v92 = 0;
    v93 = 0LL;
    v94 = 0LL;
    v95 = 0LL;
    sub_1400011A8(&v91, (__int64)L"OSReserved1", 0xBuLL);
    v28 = *a2;
    sub_1400120E0((__int64)&v96, (__int64)&v91);
    v96 = &off_1400D5610;
    v29 = &off_1400D5610;
    v100 = 10LL;
    v97 = off_1400D5638;
    v98 = 0xA5A5A5A5A5000012uLL;
    v99 = v28;
    v91 = &off_1400D41D0;
    if ( v93 )
    {
      ExFreePool(v93);
      v29 = v96;
    }
    v93 = 0LL;
    v94 = 0LL;
    v95 = 0LL;
    v100 = 16LL;
    if ( !a4 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v29[4])(&v96, a3);
      v36 = &off_1400D41D0;
      v37 = 0;
      v38 = 0LL;
      v39 = 0LL;
      v40 = 0LL;
      sub_1400011A8(&v36, (__int64)qword_1400B6F30, 1uLL);
      v30 = v38;
      if ( v38 )
      {
        v31 = v38;
      }
      else
      {
        v30 = &unk_1400D44E0;
        v31 = 0LL;
      }
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a3 + 8LL))(a3, v30, 2 * v39);
      v36 = &off_1400D41D0;
      if ( v31 )
        ExFreePool(v31);
      v38 = 0LL;
      v39 = 0LL;
      v40 = 0LL;
    }
    v96 = &off_1400D5610;
    v97 = off_1400D5638;
    sub_140005CFC(&v96);
    v36 = &off_1400D41D0;
    v37 = 0;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    sub_1400011A8(&v36, (__int64)L"ElementStride", 0xDuLL);
    v32 = a2[1];
    sub_1400120E0((__int64)&v96, (__int64)&v36);
    v97 = off_1400D5638;
    v100 = 10LL;
    v33 = &off_1400D5610;
    v96 = &off_1400D5610;
    v98 = 0xA5A5A5A5A5000012uLL;
    v99 = v32;
    if ( v38 )
    {
      ExFreePool(v38);
      v33 = v96;
    }
    v100 = 16LL;
    if ( !a4 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v33[4])(&v96, a3);
      v101 = &off_1400D41D0;
      v102 = 0;
      v103 = 0LL;
      v104 = 0LL;
      v105 = 0LL;
      sub_1400011A8(&v101, (__int64)qword_1400B6F30, 1uLL);
      v34 = v103;
      if ( v103 )
        v9 = v103;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a3 + 8LL))(a3, v9, 2 * v104);
      if ( v34 )
        ExFreePool(v34);
    }
    v96 = &off_1400D5610;
    v97 = off_1400D5638;
    return sub_140005CFC(&v96);
  }
  return result;
}
