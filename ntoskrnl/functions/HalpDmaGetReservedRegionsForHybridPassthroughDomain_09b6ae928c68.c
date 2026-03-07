__int64 __fastcall HalpDmaGetReservedRegionsForHybridPassthroughDomain(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // esi
  struct _DEVICE_OBJECT *v4; // r12
  __int64 v5; // rcx
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // eax
  _BYTE *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // r15d
  __int64 v14; // rcx
  __int64 i; // rsi
  __int64 v16; // r14
  _DWORD *v17; // r13
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v18; // rcx
  ULONGLONG v19; // rax
  ULONGLONG v20; // rcx
  ULONGLONG v21; // rax
  __int64 v22; // rcx
  _QWORD v24[10]; // [rsp+30h] [rbp-50h] BYREF
  ULONG BufferLength; // [rsp+C8h] [rbp+48h] BYREF
  int v26; // [rsp+D0h] [rbp+50h]
  ULONGLONG Start; // [rsp+D8h] [rbp+58h] BYREF

  Start = 0LL;
  BufferLength = 0;
  memset(v24, 0, sizeof(v24));
  v2 = 0LL;
  v3 = 0;
  if ( (int)HalpDmaGetIommuInterface(a1, v24) >= 0 )
  {
    if ( v24[9] )
    {
      v4 = (struct _DEVICE_OBJECT *)((__int64 (__fastcall *)(_QWORD))v24[9])(v24[1]);
      if ( IoGetDeviceProperty(v4, DevicePropertyAllocatedResources, 0, 0LL, &BufferLength) == -1073741789 )
      {
        v6 = (_DWORD *)HalpMmAllocCtxAlloc(v5, BufferLength);
        if ( v6 )
        {
          if ( IoGetDeviceProperty(v4, DevicePropertyAllocatedResources, BufferLength, v6, &BufferLength) >= 0 )
          {
            if ( *v6 )
            {
              v7 = (__int64)(v6 + 5);
              v8 = (unsigned int)*v6;
              do
              {
                v9 = *(_DWORD *)(v7 - 4);
                if ( v9 )
                {
                  v10 = (_BYTE *)v7;
                  v11 = v9;
                  do
                  {
                    if ( ((*v10 - 3) & 0xFB) == 0 )
                      ++v3;
                    v10 += 20;
                    --v11;
                  }
                  while ( v11 );
                }
                v7 += 36LL;
                --v8;
              }
              while ( v8 );
            }
            v26 = v3 + HalpDmaDomainHybridPassthroughReservedRegionsCount;
            BufferLength = 32 * (v3 + HalpDmaDomainHybridPassthroughReservedRegionsCount);
            v2 = HalpMmAllocCtxAlloc(v7, BufferLength);
            if ( v2 )
            {
              v12 = HalpDmaDomainHybridPassthroughReservedRegions;
              v13 = 0;
              while ( v12 )
              {
                v14 = 32LL * v13++;
                *(_QWORD *)(v14 + v2 + 8) = *(_QWORD *)(v12 + 8);
                *(_QWORD *)(v14 + v2 + 16) = *(_QWORD *)(v12 + 16);
                *(_BYTE *)(v14 + v2 + 24) = *(_BYTE *)(v12 + 24);
                *(_QWORD *)(v14 + v2) = v2 + 32LL * v13;
                v12 = *(_QWORD *)v12;
              }
              for ( i = 0LL; (unsigned int)i < *v6; i = (unsigned int)(i + 1) )
              {
                v16 = 0LL;
                v17 = &v6[8 * i + 3 + (unsigned int)i];
                if ( v17[1] )
                {
                  do
                  {
                    v18 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v17[4 * v16 + 2 + (unsigned int)v16];
                    if ( ((v18->Type - 3) & 0xFB) == 0 )
                    {
                      v19 = RtlCmDecodeMemIoResource(v18, &Start);
                      v20 = Start - (Start & 0xFFFFFF8000000000uLL);
                      Start &= 0xFFFFFF8000000000uLL;
                      v21 = v20 + v19;
                      v22 = 32LL * v13;
                      *(_QWORD *)(v22 + v2 + 8) = Start;
                      *(_BYTE *)(v22 + v2 + 24) = 0;
                      *(_QWORD *)(v22 + v2 + 16) = ((v21 + 0x7FFFFFFFFFLL) >> 12) & 0xFFFFFF8000000LL;
                      *(_QWORD *)(v22 + v2) = v2 + 32LL * ++v13;
                    }
                    v16 = (unsigned int)(v16 + 1);
                  }
                  while ( (unsigned int)v16 < v17[1] );
                }
              }
              v7 = 32LL * (unsigned int)(v26 - 1);
              *(_QWORD *)(v7 + v2) = 0LL;
            }
          }
          HalpMmAllocCtxFree(v7, (__int64)v6);
        }
      }
      if ( v4 )
        ObfDereferenceObjectWithTag(v4, 0x746C6644u);
    }
    ((void (__fastcall *)(_QWORD))v24[3])(v24[1]);
  }
  return v2;
}
