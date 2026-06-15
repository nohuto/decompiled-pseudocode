/*
 * XREFs of sub_180006008 @ 0x180006008
 * Callers:
 *     sub_180004620 @ 0x180004620 (sub_180004620.c)
 * Callees:
 *     sub_18000455C @ 0x18000455C (sub_18000455C.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_180006A60 @ 0x180006A60 (sub_180006A60.c)
 *     sub_180006CE0 @ 0x180006CE0 (sub_180006CE0.c)
 *     sub_180006FA0 @ 0x180006FA0 (sub_180006FA0.c)
 *     sub_1800077A8 @ 0x1800077A8 (sub_1800077A8.c)
 *     sub_180007854 @ 0x180007854 (sub_180007854.c)
 *     sub_180007930 @ 0x180007930 (sub_180007930.c)
 *     sub_180007AC0 @ 0x180007AC0 (sub_180007AC0.c)
 *     sub_180007E00 @ 0x180007E00 (sub_180007E00.c)
 *     sub_1800361D0 @ 0x1800361D0 (sub_1800361D0.c)
 *     sub_180043A40 @ 0x180043A40 (sub_180043A40.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 *     sub_1800D569C @ 0x1800D569C (sub_1800D569C.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180006008(HKEY hKey, struct _ACL *a2)
{
  LSTATUS KeySecurity; // eax
  unsigned int v5; // ebx
  void *v6; // rax
  void *v7; // rbx
  unsigned int v8; // eax
  PSECURITY_DESCRIPTOR v9; // rcx
  __int64 (__fastcall *v10)(); // rax
  PACL v11; // rdi
  struct _ACL *v12; // rax
  struct _ACL *v13; // rdi
  __int64 v14; // rax
  bool v15; // di
  __int64 v16; // rcx
  __int64 v17; // rcx
  DWORD SecurityDescriptorLength; // edi
  void *v19; // rax
  unsigned int v20; // edi
  DWORD cbSecurityDescriptor; // [rsp+60h] [rbp-178h] BYREF
  WINBOOL bDaclPresent; // [rsp+64h] [rbp-174h] BYREF
  __int64 (__fastcall **v24)(); // [rsp+68h] [rbp-170h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+70h] [rbp-168h]
  __int64 (__fastcall **v26)(); // [rsp+78h] [rbp-160h] BYREF
  __int64 v27; // [rsp+80h] [rbp-158h]
  char v28; // [rsp+88h] [rbp-150h]
  int v29; // [rsp+8Ch] [rbp-14Ch]
  __int128 v30; // [rsp+90h] [rbp-148h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-138h]
  int v32; // [rsp+A8h] [rbp-130h]
  void *v33; // [rsp+B0h] [rbp-128h]
  __int64 (__fastcall **v34)(); // [rsp+B8h] [rbp-120h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-118h]
  char v36; // [rsp+C8h] [rbp-110h]
  int v37; // [rsp+CCh] [rbp-10Ch]
  __int128 v38; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-F8h]
  int v40; // [rsp+E8h] [rbp-F0h]
  WINBOOL bDaclDefaulted; // [rsp+F0h] [rbp-E8h] BYREF
  PACL pDacl[3]; // [rsp+F8h] [rbp-E0h] BYREF
  int v43; // [rsp+110h] [rbp-C8h] BYREF
  __int16 v44; // [rsp+114h] [rbp-C4h]
  _QWORD v45[16]; // [rsp+120h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+0h]

  pDacl[1] = a2;
  cbSecurityDescriptor = 0;
  KeySecurity = RegGetKeySecurity(hKey, 4u, 0LL, &cbSecurityDescriptor);
  v5 = KeySecurity;
  if ( KeySecurity == 122 )
  {
    v6 = (void *)sub_18006A1B0(cbSecurityDescriptor, &unk_18019F848);
    v7 = v6;
    v33 = v6;
    if ( !v6 )
    {
      v20 = -2147024882;
      sub_18004BD84(retaddr, 523LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", 2147942414LL);
      return v20;
    }
    v8 = RegGetKeySecurity(hKey, 4u, v6, &cbSecurityDescriptor);
    if ( v8 )
    {
      v20 = sub_1800CA660(retaddr, 526LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v8);
LABEL_20:
      sub_18006A148(v7, 1LL);
      return v20;
    }
    v24 = off_180146470;
    pSecurityDescriptor = 0LL;
    v9 = 0LL;
    if ( v7 )
    {
      sub_180043A40(&v24);
      sub_1800077A8(&v24, v7);
      v9 = pSecurityDescriptor;
    }
    v27 = 0LL;
    v28 = 0;
    v29 = 2;
    v26 = (__int64 (__fastcall **)())&off_180146410;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0;
    if ( v9 && GetSecurityDescriptorDacl(v9, &bDaclPresent, pDacl, &bDaclDefaulted) )
    {
      v10 = v26[2];
      if ( bDaclPresent )
      {
        v11 = pDacl[0];
        ((void (__fastcall *)(__int64 (__fastcall ***)()))v10)(&v26);
        if ( v11 )
          sub_180006FA0(&v26, v11);
        else
          v28 = 1;
      }
      else
      {
        ((void (__fastcall *)(__int64 (__fastcall ***)()))v10)(&v26);
        v28 = 0;
      }
    }
    v12 = (struct _ACL *)sub_180007AC0(&v26);
    v13 = v12;
    if ( v12 )
    {
      sub_180007E00(v12);
      v35 = 0LL;
      v36 = 0;
      v37 = 2;
      v34 = (__int64 (__fastcall **)())&off_180146410;
      v38 = 0LL;
      v39 = 0LL;
      v40 = 0;
      sub_180006FA0(&v34, v13);
      v43 = 0;
      v44 = 1280;
      v14 = sub_180006CE0(v45, &v43, 6LL, 80LL, -1618417719, 1911656217, -1669870755, -116925420, 1366760775, 0LL, 0LL);
      v15 = (unsigned __int8)sub_180006A60(&v34, v14, 0x10000000LL) == 0;
      v45[0] = off_180146480;
      sub_180006A30(v45[14] - 24LL);
      sub_180006A30(v45[13] - 24LL);
      sub_180006A30(v45[12] - 24LL);
      sub_180006A30(v45[11] - 24LL);
      if ( !v15 )
      {
        sub_180007930(&v24, &v34);
        sub_180007854(&v24);
        v34 = (__int64 (__fastcall **)())&off_180146410;
        sub_1800361D0(&v38);
        _o_free(v35);
        v16 = 0LL;
        v35 = 0LL;
        if ( (_QWORD)v38 )
        {
          sub_1800D569C(v38, *((_QWORD *)&v38 + 1));
          _o_free(v38);
          v16 = v35;
        }
        v34 = &off_180146440;
        _o_free(v16);
        v26 = (__int64 (__fastcall **)())&off_180146410;
        sub_1800361D0(&v30);
        _o_free(v27);
        v17 = 0LL;
        v27 = 0LL;
        if ( (_QWORD)v30 )
        {
          sub_1800D569C(v30, *((_QWORD *)&v30 + 1));
          _o_free(v30);
          v17 = v27;
        }
        v26 = &off_180146440;
        _o_free(v17);
        SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
        v19 = (void *)sub_18006A1B0(SecurityDescriptorLength, &unk_18019F848);
        *a2 = (struct _ACL)v19;
        if ( v19 )
        {
          memcpy(v19, pSecurityDescriptor, SecurityDescriptorLength);
          v20 = 0;
        }
        else
        {
          v20 = -2147024882;
          sub_18004BD84(retaddr, 565LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", 2147942414LL);
        }
        v24 = off_180146470;
        sub_180043A40(&v24);
        goto LABEL_20;
      }
      sub_18004BD84(retaddr, 546LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", 2147500037LL);
      sub_18000455C(&v34);
      sub_18000455C(&v26);
      v24 = off_180146470;
      sub_180043A40(&v24);
      sub_18006A148(v7, 1LL);
      return 2147500037LL;
    }
    else
    {
      sub_18004BD84(retaddr, 538LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", 2147942487LL);
      sub_18000455C(&v26);
      v24 = off_180146470;
      sub_180043A40(&v24);
      sub_18006A148(v7, 1LL);
      return 2147942487LL;
    }
  }
  else
  {
    if ( KeySecurity > 0 )
      v5 = (unsigned __int16)KeySecurity | 0x80070000;
    if ( (v5 & 0x80000000) != 0 )
      sub_18004BD84(retaddr, 520LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v5);
    return v5;
  }
}
