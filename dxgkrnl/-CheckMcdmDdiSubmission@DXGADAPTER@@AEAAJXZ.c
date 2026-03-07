__int64 __fastcall DXGADAPTER::CheckMcdmDdiSubmission(DXGADAPTER *this)
{
  int v3; // eax
  int v4; // r15d
  char v5; // r12
  char v6; // r13
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned int v8; // edx
  char v9; // r9
  __int64 v10; // r10
  char v11; // r11
  unsigned __int16 *v12; // r8
  __int64 v13; // rcx
  _BYTE *v14; // rcx
  __int64 v15; // r10
  __int64 v16; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rax
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  int v62; // edx
  int v63; // ecx
  int v64; // r8d
  int v65; // edx
  int v66; // ecx
  int v67; // r8d
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  int v71; // edx
  int v72; // ecx
  int v73; // r8d
  int v74; // edx
  int v75; // ecx
  int v76; // r8d
  int v77; // edx
  int v78; // ecx
  int v79; // r8d
  int v80; // edx
  int v81; // ecx
  int v82; // r8d
  int v83; // edx
  int v84; // ecx
  int v85; // r8d
  int v86; // edx
  int v87; // ecx
  int v88; // r8d
  int v89; // edx
  int v90; // ecx
  int v91; // r8d
  int v92; // edx
  int v93; // ecx
  int v94; // r8d
  int v95; // edx
  int v96; // ecx
  int v97; // r8d
  int v98; // edx
  int v99; // ecx
  int v100; // r8d
  int v101; // edx
  int v102; // ecx
  int v103; // r8d
  int v104; // edx
  int v105; // ecx
  int v106; // r8d
  int v107; // edx
  int v108; // ecx
  int v109; // r8d
  char v110; // [rsp+90h] [rbp+8h]

  if ( (*((_DWORD *)this + 698) & 8) == 0 )
    return 0LL;
  v3 = *((_DWORD *)this + 109);
  if ( (v3 & 8) != 0 || (v3 & 0x4000) != 0 )
    return 0LL;
  v4 = 0;
  v110 = 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
    if ( v8 >= NumDifferentPhysicalAdapters )
      break;
    v12 = (unsigned __int16 *)(*((_QWORD *)this + 351) + 344LL * v8);
    v13 = *((_QWORD *)v12 + 4);
    if ( v13 && (unsigned __int16)v10 < *v12 )
    {
      v14 = (_BYTE *)(v13 + 73);
      v15 = *v12;
      do
      {
        if ( *(v14 - 1) || *v14 || (*((_DWORD *)v12 + 4) & 0x40) != 0 )
        {
          v5 = 1;
          if ( (*(v14 - 5) & 1) != 0 )
            v11 = 1;
          if ( *v14 )
            v6 = 1;
        }
        v14 += 74;
        --v15;
      }
      while ( v15 );
      v110 = v11;
    }
  }
  v16 = *((_QWORD *)this + 64);
  if ( v9 )
  {
    if ( !v16 )
    {
      WdLogSingleEntry1(2LL, 269LL);
      v10 = 0LL;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      {
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v18,
          v17,
          v19,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiPatch is required.",
          269LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v10 = 0LL;
      }
      v4 = 1;
    }
    if ( *((_QWORD *)this + 91) == v10 )
    {
      WdLogSingleEntry1(2LL, 270LL);
      v10 = 0LL;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      {
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v21,
          v20,
          v22,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiRender is required.",
          270LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v10 = 0LL;
      }
      ++v4;
    }
    if ( *((_QWORD *)this + 65) == v10 )
    {
      WdLogSingleEntry1(2LL, 271LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v23,
          v24,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSubmitCommand is required.",
          271LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
  }
  else
  {
    if ( v16 )
    {
      WdLogSingleEntry1(2LL, 275LL);
      v10 = 0LL;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        {
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v26,
            v25,
            v27,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiPatch is not used.",
            275LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v10 = 0LL;
        }
      }
    }
    if ( *((_QWORD *)this + 91) != v10 )
    {
      WdLogSingleEntry1(2LL, 276LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v29,
            v28,
            v30,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiRender is not used.",
            276LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_SUBMITCOMMAND *))this + 65) != DXGADAPTER::DefaultDdiSubmitCommand )
    {
      WdLogSingleEntry1(2LL, 277LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v32,
            v31,
            v33,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSubmitCommand is not used.",
            277LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  v34 = *((_QWORD *)this + 121);
  if ( v5 )
  {
    if ( !v34 )
    {
      WdLogSingleEntry1(2LL, 282LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v36,
          v35,
          v37,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiCreateProcess is required.",
          282LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
    if ( !*((_QWORD *)this + 122) )
    {
      WdLogSingleEntry1(2LL, 283LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v39,
          v38,
          v40,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiDestroyProcess is required.",
          283LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
    if ( !*((_QWORD *)this + 118) )
    {
      WdLogSingleEntry1(2LL, 284LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v42,
          v41,
          v43,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiGetRootPageTableSize is required.",
          284LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
    if ( !*((_QWORD *)this + 117) )
    {
      WdLogSingleEntry1(2LL, 285LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v45,
          v44,
          v46,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetRootPageTable is required.",
          285LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
    if ( !*((_QWORD *)this + 116) )
    {
      WdLogSingleEntry1(2LL, 286LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v48,
          v47,
          v49,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSubmitCommandVirtual is required.",
          286LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
  }
  else
  {
    if ( v34 )
    {
      WdLogSingleEntry1(2LL, 292LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v51,
            v50,
            v52,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiCreateProcess is not used.",
            292LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 122) )
    {
      WdLogSingleEntry1(2LL, 293LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v54,
            v53,
            v55,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiDestroyProcess is not used.",
            293LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 118) )
    {
      WdLogSingleEntry1(2LL, 294LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v57,
            v56,
            v58,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiGetRootPageTableSize is not used.",
            294LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 117) )
    {
      WdLogSingleEntry1(2LL, 295LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v60,
            v59,
            v61,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSetRootPageTable is not used.",
            295LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 116) )
    {
      WdLogSingleEntry1(2LL, 296LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v63,
            v62,
            v64,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSubmitCommandVirtual is not used.",
            296LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 119) )
    {
      WdLogSingleEntry1(2LL, 297LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v66,
            v65,
            v67,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiMapCpuHostAperture is not used.",
            297LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 120) )
    {
      WdLogSingleEntry1(2LL, 298LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v69,
            v68,
            v70,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiUnmapCpuHostAperture is not used.",
            298LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  if ( v6 )
  {
    if ( !*((_QWORD *)this + 163) )
    {
      WdLogSingleEntry1(2LL, 303LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v72,
          v71,
          v73,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiBeginExclusiveAccess is required.",
          303LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
    if ( !*((_QWORD *)this + 164) )
    {
      WdLogSingleEntry1(2LL, 304LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v75,
          v74,
          v76,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiEndExclusiveAccess is required.",
          304LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
  }
  if ( !v110 )
  {
    if ( *((_QWORD *)this + 137) )
    {
      WdLogSingleEntry1(2LL, 309LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v78,
            v77,
            v79,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiCreateHwQueue is not used.",
            309LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 138) )
    {
      WdLogSingleEntry1(2LL, 310LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v81,
            v80,
            v82,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiDestroyHwQueue is not used.",
            310LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 140) )
    {
      WdLogSingleEntry1(2LL, 311LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v84,
            v83,
            v85,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiResetHwEngine is not used.",
            311LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 161) )
    {
      WdLogSingleEntry1(2LL, 312LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v87,
            v86,
            v88,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiResumeContext is not used.",
            312LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 141) )
    {
      WdLogSingleEntry1(2LL, 313LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v90,
            v89,
            v91,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiResumeHwEngine is not used.",
            313LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 159) )
    {
      WdLogSingleEntry1(2LL, 314LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v93,
            v92,
            v94,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSetContextSchedulingProperties is not used.",
            314LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 156) )
    {
      WdLogSingleEntry1(2LL, 315LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v96,
            v95,
            v97,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSetSchedulingLogBuffer is not used.",
            315LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 157) )
    {
      WdLogSingleEntry1(2LL, 316LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v99,
            v98,
            v100,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSetupPriorityBands is not used.",
            316LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 167) )
    {
      WdLogSingleEntry1(2LL, 317LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v102,
            v101,
            v103,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSignalMonitoredFence is not used.",
            317LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 139) )
    {
      WdLogSingleEntry1(2LL, 318LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v105,
            v104,
            v106,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSubmitCommandToHwQueue is not used.",
            318LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 160) )
    {
      WdLogSingleEntry1(2LL, 319LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v108,
            v107,
            v109,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSuspendContext is not used.",
            319LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  if ( !v4 )
    return 0LL;
  else
    return 3221225561LL;
}
