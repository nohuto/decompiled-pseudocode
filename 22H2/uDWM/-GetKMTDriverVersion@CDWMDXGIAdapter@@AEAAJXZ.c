/*
 * XREFs of ?GetKMTDriverVersion@CDWMDXGIAdapter@@AEAAJXZ @ 0x180038260
 * Callers:
 *     ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x1800380CC (-Initialize@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIAdapter::GetKMTDriverVersion(CDWMDXGIAdapter *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v7; // r9d
  unsigned int v8; // [rsp+20h] [rbp-30h]
  __int128 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]
  int v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v11 = 0;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v10 = 0LL;
  v9 = 0LL;
  v3 = (**v2)(v2, &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2, &v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v8 = 238;
LABEL_14:
    v7 = v3;
    goto LABEL_16;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v13);
  v4 = v3;
  if ( v3 < 0 )
  {
    v8 = 240;
    goto LABEL_14;
  }
  *(_QWORD *)&v9 = (unsigned int)v13 | 0xD00000000LL;
  *((_QWORD *)&v9 + 1) = &v11;
  LODWORD(v10) = 4;
  v5 = D3DKMTQueryAdapterInfo(&v9);
  if ( v5 >= 0 )
  {
    *((_DWORD *)this + 86) = v11;
    goto LABEL_5;
  }
  v8 = 247;
  v4 = v5 | 0x10000000;
  v7 = v5 | 0x10000000;
LABEL_16:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v8);
LABEL_5:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v4 == -805305674 )
    return (unsigned int)-2003304291;
  return v4;
}
