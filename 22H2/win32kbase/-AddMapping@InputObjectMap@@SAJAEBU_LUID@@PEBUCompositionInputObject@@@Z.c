/*
 * XREFs of ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C01FB194
 * Callers:
 *     NtUserAddVisualIdentifier @ 0x1C012D380 (NtUserAddVisualIdentifier.c)
 *     ?SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C01BACCC (-SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00481FC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_63d17d6d41434870d2c55e28a74f5cc8_@@CAXPEAX@Z @ 0x1C00C7EF0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_63d17d6d41434870d2c55e28a74f5cc8_@@CAXPEAX@Z.c)
 *     ?AddMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z @ 0x1C01FB4EC (-AddMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z.c)
 *     ?AllocateBucket@InputObjectMap@@CAPEAX_KPEAX@Z @ 0x1C01FB554 (-AllocateBucket@InputObjectMap@@CAPEAX_KPEAX@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x1C01FB580 (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall InputObjectMap::AddMapping(const struct _LUID *a1, const struct CompositionInputObject *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  char *Bucket; // r8
  char v7; // cl
  unsigned __int64 v8; // rcx
  char v9; // dl
  unsigned int v10; // edi
  __int64 v11; // r10
  _QWORD *v12; // r14
  _QWORD *v13; // r9
  __int64 v14; // rdx
  PVOID v15; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // [rsp+70h] [rbp+50h]
  __int64 v22; // [rsp+70h] [rbp+50h]
  __int64 v23; // [rsp+78h] [rbp+58h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v23, a2);
  v4 = 0;
  if ( !InputObjectMap::FindEntry(a1) )
  {
    v5 = 2 * ((unsigned int)dword_1C0254554 >> 5);
    if ( InputObjectMap::s_hashTable >= (unsigned int)v5 )
    {
      if ( (unsigned int)v5 < 4 )
        v5 = 4LL;
      Bucket = (char *)InputObjectMap::AllocateBucket(8LL * (unsigned int)v5, 0LL);
      if ( Bucket )
      {
        if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
        {
          v7 = -1;
          do
          {
            ++v7;
            LODWORD(v5) = (unsigned int)v5 >> 1;
          }
          while ( (_DWORD)v5 );
          v5 = (unsigned int)(1 << v7);
        }
        if ( (unsigned int)v5 > 0x4000000 )
          v5 = 0x4000000LL;
        v8 = (unsigned int)v5;
        if ( Bucket > &Bucket[8 * v5] )
          v8 = 0LL;
        if ( v8 )
          memset64(Bucket, (unsigned __int64)&InputObjectMap::s_hashTable + 1, v8);
        v9 = dword_1C0254554;
        v10 = 0;
        v11 = -1LL << (dword_1C0254554 & 0x1F);
        if ( (dword_1C0254554 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v12 = Buffer;
            while ( 1 )
            {
              v13 = (_QWORD *)v12[v10];
              if ( ((unsigned __int8)v13 & 1) != 0 )
                break;
              v12[v10] = *v13;
              v21 = v11 & v13[1];
              v14 = (37
                   * (BYTE6(v21)
                    + 37
                    * (BYTE5(v21)
                     + 37
                     * (BYTE4(v21)
                      + 37
                      * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
                   + HIBYTE(v21)) & (unsigned int)(v5 - 1);
              *v13 = *(_QWORD *)&Bucket[8 * v14];
              *(_QWORD *)&Bucket[8 * v14] = v13;
            }
            v9 = dword_1C0254554;
            ++v10;
          }
          while ( v10 < (unsigned int)dword_1C0254554 >> 5 );
        }
        v15 = Buffer;
        Buffer = Bucket;
        dword_1C0254554 = (32 * v5) | v9 & 0x1F;
        if ( v15 )
          _lambda_63d17d6d41434870d2c55e28a74f5cc8_::_lambda_invoker_cdecl_<void *>(v15);
      }
      else if ( (dword_1C0254554 & 0xFFFFFFE0) == 0 )
      {
LABEL_26:
        v4 = -1073741670;
        goto LABEL_28;
      }
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x766E6355u);
    if ( PoolWithTag )
    {
      v17 = HIBYTE(a1->HighPart)
          + 37
          * (BYTE2(a1->HighPart)
           + 37
           * (BYTE1(a1->HighPart)
            + 37
            * (LOBYTE(a1->HighPart)
             + 37
             * (HIBYTE(a1->LowPart)
              + 37 * (BYTE2(a1->LowPart) + 37 * (BYTE1(a1->LowPart) + 37 * (LOBYTE(a1->LowPart) + 11623883LL)))))));
      PoolWithTag[1] = v17;
      PoolWithTag[2] = *a1;
      PoolWithTag[3] = a2;
      v22 = v17 & (-1LL << (dword_1C0254554 & 0x1F));
      v18 = Buffer;
      v19 = (37
           * (BYTE6(v22)
            + 37
            * (BYTE5(v22)
             + 37
             * (BYTE4(v22)
              + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
           + HIBYTE(v22)) & (((unsigned int)dword_1C0254554 >> 5) - 1);
      *PoolWithTag = *((_QWORD *)Buffer + v19);
      v18[v19] = PoolWithTag;
      ++InputObjectMap::s_hashTable;
      ObReferenceObjectByPointer(a2, 3u, ExCompositionObjectType, 0);
      InputTraceLogging::InputSink::AddMapping(a2, *a1);
      goto LABEL_28;
    }
    goto LABEL_26;
  }
  v4 = -1073741811;
LABEL_28:
  ExReleasePushLockExclusiveEx(v23, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
