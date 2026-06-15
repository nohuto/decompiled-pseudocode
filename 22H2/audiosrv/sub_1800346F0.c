/*
 * XREFs of sub_1800346F0 @ 0x1800346F0
 * Callers:
 *     <none>
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

_WORD *__fastcall sub_1800346F0(__int64 a1)
{
  _WORD *v1; // rbx
  __int64 v3; // rsi
  _WORD *v4; // rax
  DWORD LengthSid; // eax
  size_t v6; // r14
  size_t v7; // rsi
  void *v8; // rcx
  __int64 v10; // rcx

  v1 = *(_WORD **)(a1 + 136);
  if ( !v1 )
  {
    v3 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    v4 = (_WORD *)o_malloc(v3);
    v1 = v4;
    if ( !v4 )
      sub_1800B8610(2147942414LL);
    memset(v4, 0, (unsigned int)v3);
    v1[1] = v3;
    *((_BYTE *)v1 + 1) = *(_BYTE *)(a1 + 132);
    *(_BYTE *)v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    *((_DWORD *)v1 + 1) = *(_DWORD *)(a1 + 128);
    LengthSid = GetLengthSid((PSID)(a1 + 16));
    v6 = v3 - 8;
    v7 = LengthSid;
    v8 = v1 + 4;
    if ( !LengthSid )
      goto LABEL_8;
    if ( v1 == (_WORD *)-8LL )
      goto LABEL_11;
    if ( a1 != -16 && v6 >= LengthSid )
    {
      memcpy(v8, (const void *)(a1 + 16), LengthSid);
LABEL_8:
      *(_QWORD *)(a1 + 136) = v1;
      return v1;
    }
    memset(v8, 0, v6);
    if ( a1 == -16 )
    {
LABEL_11:
      *(_DWORD *)o__errno(v8) = 22;
    }
    else
    {
      if ( v6 >= v7 )
        goto LABEL_16;
      *(_DWORD *)o__errno(v8) = 34;
    }
    o__invalid_parameter_noinfo(v10);
LABEL_16:
    sub_1800B8610(2147942487LL);
  }
  return v1;
}
