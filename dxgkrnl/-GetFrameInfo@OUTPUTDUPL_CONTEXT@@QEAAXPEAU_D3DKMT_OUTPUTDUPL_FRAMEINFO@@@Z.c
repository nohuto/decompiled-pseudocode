/*
 * XREFs of ?GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z @ 0x1C032D498
 * Callers:
 *     ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1C032772C (-GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z.c)
 * Callees:
 *     McTemplateK0pqxxqttqq_EtwWriteTransfer @ 0x1C00540EC (McTemplateK0pqxxqttqq_EtwWriteTransfer.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::GetFrameInfo(OUTPUTDUPL_CONTEXT *this, struct _D3DKMT_OUTPUTDUPL_FRAMEINFO *a2)
{
  LARGE_INTEGER *v2; // rax
  __int64 v4; // rdx
  BOOL v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = (LARGE_INTEGER *)*((_QWORD *)this + 33);
  v4 = 0LL;
  if ( v2[2].HighPart )
  {
    a2->LastMouseUpdateTime = *v2;
    a2->PointerPosition.Position.x = *(_DWORD *)(*((_QWORD *)this + 33) + 28LL);
    a2->PointerPosition.Position.y = *(_DWORD *)(*((_QWORD *)this + 33) + 32LL);
    v6 = *(_DWORD *)(*((_QWORD *)this + 33) + 36LL) & 1;
  }
  else
  {
    a2->LastMouseUpdateTime.QuadPart = 0LL;
    v6 = 0;
    a2->PointerPosition.Position = 0LL;
  }
  a2->PointerPosition.Visible = v6;
  v7 = *((_QWORD *)this + 33);
  if ( *(_DWORD *)(v7 + 40) )
    v8 = *(unsigned int *)(*(_QWORD *)(v7 + 88) + 8LL);
  else
    v8 = 0LL;
  a2->PointerShapeBufferSize = v8;
  v9 = *((_QWORD *)this + 33);
  if ( *(_DWORD *)(v9 + 16) == 2 )
  {
    a2->LastPresentTime.QuadPart = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL);
    a2->AccumulatedFrames = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 4LL);
    a2->RectsCoalesced = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 16LL);
    a2->ProtectedContentMaskedOut = **(_DWORD **)(*((_QWORD *)this + 33) + 8LL);
    v8 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
    v4 = (unsigned int)(16 * *(_DWORD *)(v8 + 24) + 24 * *(_DWORD *)(v8 + 44));
  }
  else
  {
    a2->LastPresentTime.QuadPart = 0LL;
    *(_QWORD *)&a2->AccumulatedFrames = 0LL;
    a2->ProtectedContentMaskedOut = 0;
  }
  a2->TotalMetadataBufferSize = v4;
  *((_DWORD *)this + 77) = 1;
  *((_DWORD *)this + 78) = 1;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqxxqttqq_EtwWriteTransfer(v8, v4, (__int64)a2);
}
