/*
 * XREFs of ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x1800DABCC
 * Callers:
 *     ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x1800180F0 (-SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180072D80 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?SetDrawMethod@CD3DBatchExecutionContext@@EEAAXW4PrimitiveDrawMethod@@@Z @ 0x1800DAB70 (-SetDrawMethod@CD3DBatchExecutionContext@@EEAAXW4PrimitiveDrawMethod@@@Z.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x180207270 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1800900C4 (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::Flush(__int64 a1, int a2)
{
  __int64 result; // rax
  CD3DDynamicAppendBuffer *v4; // rdi
  char v5; // al

  *(_DWORD *)(a1 + 40) |= a2;
  result = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(result + 40) )
  {
    v4 = (CD3DDynamicAppendBuffer *)(result + 64);
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(result + 16));
    v5 = *(_BYTE *)(a1 + 82);
    if ( v5 )
    {
      if ( v5 == 2 )
      {
        CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(*(_QWORD *)(a1 + 32) + 112LL));
        CD3DDynamicAppendBuffer::EndAppend(v4);
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(**(_QWORD **)(a1 + 16)
                                                                                           + 160LL))(
                   *(_QWORD *)(a1 + 16),
                   *(unsigned int *)(a1 + 100),
                   *(unsigned int *)(a1 + 104),
                   *(unsigned int *)(a1 + 88),
                   0,
                   *(_DWORD *)(a1 + 92));
      }
      else
      {
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 104LL))(
                   *(_QWORD *)(a1 + 16),
                   *(unsigned int *)(a1 + 96),
                   *(unsigned int *)(a1 + 84));
      }
    }
    else
    {
      CD3DDynamicAppendBuffer::EndAppend(v4);
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 96LL))(
                 *(_QWORD *)(a1 + 16),
                 *(unsigned int *)(a1 + 100),
                 *(unsigned int *)(a1 + 88),
                 0LL);
    }
    ++*(_DWORD *)(a1 + 124);
    *(_DWORD *)(a1 + 96) = 0;
    *(_DWORD *)(a1 + 100) = 0;
    *(_DWORD *)(a1 + 104) = 0;
  }
  return result;
}
