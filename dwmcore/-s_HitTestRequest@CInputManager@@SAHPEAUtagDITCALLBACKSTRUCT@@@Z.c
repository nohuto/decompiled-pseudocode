_BOOL8 __fastcall CInputManager::s_HitTestRequest(struct tagDITCALLBACKSTRUCT *a1)
{
  int v2; // eax
  int v3; // edi
  int v4; // edx
  int *v5; // rsi
  CVisual **v6; // r14
  CResource *v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rcx
  int v17; // eax
  CResource *v19; // [rsp+C0h] [rbp-80h] BYREF
  int v20; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-68h]
  int v22; // [rsp+E0h] [rbp-60h]
  __int64 v23; // [rsp+E8h] [rbp-58h]
  __int128 v24; // [rsp+F0h] [rbp-50h]
  int v25; // [rsp+100h] [rbp-40h] BYREF
  int v26; // [rsp+104h] [rbp-3Ch]
  int v27; // [rsp+108h] [rbp-38h]
  int v28; // [rsp+10Ch] [rbp-34h]
  int v29; // [rsp+110h] [rbp-30h]
  int v30; // [rsp+114h] [rbp-2Ch]
  int v31; // [rsp+118h] [rbp-28h]
  int v32; // [rsp+11Ch] [rbp-24h]
  int v33; // [rsp+120h] [rbp-20h]
  int v34; // [rsp+124h] [rbp-1Ch]
  int v35; // [rsp+128h] [rbp-18h]
  int v36; // [rsp+12Ch] [rbp-14h]
  int v37; // [rsp+130h] [rbp-10h]
  int v38; // [rsp+134h] [rbp-Ch]
  int v39; // [rsp+138h] [rbp-8h]
  int v40; // [rsp+13Ch] [rbp-4h]
  int v41; // [rsp+140h] [rbp+0h]
  int v42; // [rsp+144h] [rbp+4h]
  unsigned __int8 v43; // [rsp+148h] [rbp+8h]
  _QWORD v44[2]; // [rsp+150h] [rbp+10h] BYREF
  int v45; // [rsp+160h] [rbp+20h]
  int v46; // [rsp+164h] [rbp+24h]
  int v47; // [rsp+168h] [rbp+28h]
  _BYTE v48[48]; // [rsp+170h] [rbp+30h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v48, "HitTest", 0LL);
  v2 = *((_DWORD *)a1 + 32);
  v22 = 0;
  v23 = 0LL;
  v3 = 1;
  v41 = 0;
  v42 = 0;
  v20 = v2;
  v21 = *((_QWORD *)a1 + 15);
  v24 = 0LL;
  v43 = 0;
  CMILMatrix::SetToIdentity((CMILMatrix *)&v25);
  v5 = (int *)((char *)a1 + 108);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0qqxq_EventWriteTransfer(
      *((_DWORD *)a1 + 28),
      v4,
      *((_DWORD *)a1 + 1),
      *((_DWORD *)a1 + 2),
      *((_DWORD *)a1 + 28),
      *v5);
  if ( !CInputManager::s_pInputManager )
    goto LABEL_14;
  v6 = (CVisual **)((char *)CInputManager::s_pInputManager + 80);
  if ( *v5 || *((_DWORD *)a1 + 28) == g_luidZero.LowPart && *((_DWORD *)a1 + 29) == g_luidZero.HighPart )
  {
    v19 = (CResource *)((unsigned int)*v5 | 0xFFFFFFFE00000000uLL);
    v7 = v19;
  }
  else
  {
    v7 = (CResource *)*((_QWORD *)a1 + 14);
  }
  v8 = (__int64 *)*((_QWORD *)CInputManager::s_pInputManager + 2);
  v9 = *v8;
  v19 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, CResource *, CResource **))(v9 + 56))(v8, v7, &v19);
  v3 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180338CD0, 2u, v10, 0x12Eu, 0LL);
  }
  else
  {
    v12 = CDesktopTree::CleanTreeAndLockForRead(v19);
    v3 = v12;
    if ( v12 >= 0 )
    {
      v44[0] = v19;
      v44[1] = *(_QWORD *)((char *)a1 + 4);
      v45 = *(_DWORD *)a1;
      v46 = *((_DWORD *)a1 + 26);
      v47 = *v5;
      v14 = CHitTestContext::HitTestPoint(
              v6,
              (const struct CHitTestContext::HitTestPointRequest *)v44,
              (struct CHitTestContext::HitTestPointResult *)&v20);
      v3 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_180338CD0, 2u, v14, 0x13Bu, 0LL);
      ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v19 + 2) + 672LL));
      if ( v19 )
        CResource::InternalRelease(v19);
LABEL_14:
      v16 = v24;
      *((_QWORD *)a1 + 2) = v23;
      *((_DWORD *)a1 + 24) = v42;
      v17 = (*((_DWORD *)a1 + 25) ^ v43) & 1;
      *((_QWORD *)a1 + 3) = v16;
      *((_DWORD *)a1 + 25) ^= v17;
      *((_DWORD *)a1 + 32) = v22;
      if ( v16 )
        CopyInputTransform((const struct CMILMatrix *)&v25, (struct tagDITCALLBACKSTRUCT *)((char *)a1 + 32));
      goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180338CD0, 2u, v12, 0x131u, 0LL);
  }
  if ( v19 )
    CResource::InternalRelease(v19);
LABEL_16:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0qqppxffffffffffffffff_EventWriteTransfer(
      DWORD2(v24),
      v4,
      *((_DWORD *)a1 + 1),
      *((_DWORD *)a1 + 2),
      *((_QWORD *)a1 + 2),
      *((_QWORD *)a1 + 3),
      SBYTE8(v24),
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v48);
  return v3 >= 0;
}
