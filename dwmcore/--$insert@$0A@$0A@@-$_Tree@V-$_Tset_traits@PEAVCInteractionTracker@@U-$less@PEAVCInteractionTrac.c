__int64 __fastcall std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::insert<0,0>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::_Emplace<CInteractionTracker * const &>(
    a1,
    (__int64)&v4);
  *(_QWORD *)a2 = v4;
  *(_BYTE *)(a2 + 8) = v5;
  return a2;
}
