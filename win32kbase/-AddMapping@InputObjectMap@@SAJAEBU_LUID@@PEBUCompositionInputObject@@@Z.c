/*
 * XREFs of ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C0270AE4
 * Callers:
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C0094ED0 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     NtUserAddVisualIdentifier @ 0x1C016D320 (NtUserAddVisualIdentifier.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C005BB7C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?AddMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z @ 0x1C0270E6C (-AddMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z.c)
 *     ?AllocateBucket@InputObjectMap@@CAPEAX_KPEAX@Z @ 0x1C0270ED4 (-AllocateBucket@InputObjectMap@@CAPEAX_KPEAX@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x1C0270F00 (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z.c)
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
  __int64 Pool2; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+80h] [rbp+18h]
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v23, (struct _EX_PUSH_LOCK *)&InputObjectMap::s_hashTableLock);
  v4 = 0;
  if ( !InputObjectMap::FindEntry(a1) )
  {
    v5 = (unsigned int)(2 * (*(&InputObjectMap::s_hashTable + 1) >> 5));
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
        v9 = *(&InputObjectMap::s_hashTable + 4);
        v10 = 0;
        v11 = -1LL << (*(&InputObjectMap::s_hashTable + 4) & 0x1F);
        if ( (*(&InputObjectMap::s_hashTable + 1) & 0xFFFFFFE0) != 0 )
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
              v22 = v11 & v13[1];
              v14 = (37
                   * (BYTE6(v22)
                    + 37
                    * (BYTE5(v22)
                     + 37
                     * (BYTE4(v22)
                      + 37
                      * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
                   + HIBYTE(v22)) & (unsigned int)(v5 - 1);
              *v13 = *(_QWORD *)&Bucket[8 * v14];
              *(_QWORD *)&Bucket[8 * v14] = v13;
            }
            v9 = *(&InputObjectMap::s_hashTable + 4);
            ++v10;
          }
          while ( v10 < *(&InputObjectMap::s_hashTable + 1) >> 5 );
        }
        v15 = Buffer;
        Buffer = Bucket;
        *(&InputObjectMap::s_hashTable + 1) = (32 * v5) | v9 & 0x1F;
        if ( v15 )
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v15);
      }
      else if ( (*(&InputObjectMap::s_hashTable + 1) & 0xFFFFFFE0) == 0 )
      {
LABEL_26:
        v4 = -1073741670;
        goto LABEL_28;
      }
    }
    Pool2 = ExAllocatePool2(258LL, 32LL, 1986945877LL);
    if ( Pool2 )
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
      *(_QWORD *)(Pool2 + 8) = v17;
      *(struct _LUID *)(Pool2 + 16) = *a1;
      *(_QWORD *)(Pool2 + 24) = a2;
      v21 = v17 & (-1LL << (*(&InputObjectMap::s_hashTable + 4) & 0x1F));
      v18 = Buffer;
      v19 = (37
           * (BYTE6(v21)
            + 37
            * (BYTE5(v21)
             + 37
             * (BYTE4(v21)
              + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
           + HIBYTE(v21)) & (unsigned int)((*(&InputObjectMap::s_hashTable + 1) >> 5) - 1);
      *(_QWORD *)Pool2 = *((_QWORD *)Buffer + v19);
      v18[v19] = Pool2;
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
